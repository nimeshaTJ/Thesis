import mujoco as mj
import mujoco.viewer
import time
import numpy as np
import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from moveit_msgs.msg import PlanningScene

max_width = 100
max_height = 100

class MujocoController(Node):
	def __init__(self, model, data, viewer):
		super().__init__('mujoco_controller')
		
		self.subscription = self.create_subscription(
			PlanningScene,
			'monitored_planning_scene',
			self.listener_callback,
			10
		)

		self.model = model
		self.data = data
		self.viewer = viewer

		self.joint_angles = np.array(self.data.ctrl)
		self.timer_count = 0
		self.count = 0

		self.control_timer = self.create_timer(0.000000001, self.control_callback)

	def listener_callback(self, msg):
		self.joint_angles = msg.robot_state.joint_state.position[:7]
		self.joint_angles[6] = (self.joint_angles[6]/0.7)*255	# Mapping to range of 0 - 255
		self.data.ctrl = list(self.joint_angles)
		print(self.data.ctrl)

	def control_callback(self):
		start = time.time()
		if self.viewer.is_running():
			step_start = time.time()

			mj.mj_step(self.model, self.data)

			# Pick up changes to the physics state, apply perturbations, update options from GUI.
			self.viewer.sync()

			# Rudimentary time keeping, will drift relative to wall clock.
			time_until_next_step = self.model.opt.timestep - (time.time() - step_start)
			if time_until_next_step > 0:
				time.sleep(time_until_next_step)

def main():
	rclpy.init(args=None)
	
	model = mj.MjModel.from_xml_path('/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ur5e_plus_2f85.xml')
	data = mj.MjData(model)

	with mj.viewer.launch_passive(model, data) as viewer:
		mujoco_controller = MujocoController(model, data, viewer)
		rclpy.spin(mujoco_controller)
		mujoco_controller.destroy_node()
		rclpy.shutdown()


if __name__=="__main__":
	main()