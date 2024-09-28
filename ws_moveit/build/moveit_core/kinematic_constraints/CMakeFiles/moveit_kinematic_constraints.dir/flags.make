# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# compile CXX with /usr/bin/c++
CXX_DEFINES = -DBOOST_ALL_NO_LIB -DBOOST_ATOMIC_DYN_LINK -DBOOST_CHRONO_DYN_LINK -DBOOST_DATE_TIME_DYN_LINK -DBOOST_FILESYSTEM_DYN_LINK -DBOOST_IOSTREAMS_DYN_LINK -DBOOST_PROGRAM_OPTIONS_DYN_LINK -DBOOST_REGEX_DYN_LINK -DBOOST_SERIALIZATION_DYN_LINK -DBOOST_SYSTEM_DYN_LINK -DBOOST_THREAD_DYN_LINK -DDEFAULT_RMW_IMPLEMENTATION=rmw_fastrtps_cpp -Dmoveit_kinematic_constraints_EXPORTS

CXX_INCLUDES = -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/exceptions/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/collision_detection/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/collision_detection_fcl/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/collision_detection_bullet/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/constraint_samplers/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/controller_manager/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/distance_field/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/collision_distance_field/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/dynamics_solver/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/kinematics_base/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/kinematics_metrics/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/robot_model/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/transforms/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/robot_state/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/robot_trajectory/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/kinematic_constraints/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/macros/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/online_signal_smoothing/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/planning_interface/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/planning_request_adapter/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/planning_scene/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/sensor_manager/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/trajectory_processing/include -I/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_core/utils/include -I/home/nimesha/thesis/ws_moveit/build/moveit_core/include -I/home/nimesha/thesis/ws_moveit/build/moveit_core/collision_detection_fcl -I/home/nimesha/thesis/ws_moveit/build/moveit_core/collision_detection -I/home/nimesha/thesis/ws_moveit/build/moveit_core/planning_scene -I/home/nimesha/thesis/ws_moveit/build/moveit_core/kinematics_base -isystem /usr/include/eigen3 -isystem /home/nimesha/ros2_humble/ros2-linux/include/urdf -isystem /home/nimesha/ros2_humble/ros2-linux/include/urdfdom -isystem /home/nimesha/ros2_humble/ros2-linux/include/urdfdom_headers -isystem /home/nimesha/ros2_humble/ros2-linux/include/tf2_geometry_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/geometry_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/visualization_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/tf2_eigen -isystem /home/nimesha/ros2_humble/ros2-linux/include/urdf_parser_plugin -isystem /home/nimesha/ros2_humble/ros2-linux/include/pluginlib -isystem /home/nimesha/ros2_humble/ros2-linux/include/ament_index_cpp -isystem /home/nimesha/ros2_humble/ros2-linux/include/class_loader -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcpputils -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcutils -isystem /home/nimesha/ros2_humble/ros2-linux/include/std_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/builtin_interfaces -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_runtime_c -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_typesupport_interface -isystem /home/nimesha/ros2_humble/ros2-linux/include/fastcdr -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_runtime_cpp -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_typesupport_fastrtps_cpp -isystem /home/nimesha/ros2_humble/ros2-linux/include/rmw -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_typesupport_fastrtps_c -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_typesupport_introspection_c -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_typesupport_introspection_cpp -isystem /home/nimesha/ros2_humble/ros2-linux/include/tf2 -isystem /home/nimesha/ros2_humble/ros2-linux/include/tf2_ros -isystem /home/nimesha/ros2_humble/ros2-linux/include/message_filters -isystem /home/nimesha/ros2_humble/ros2-linux/include/rclcpp -isystem /home/nimesha/ros2_humble/ros2-linux/include/libstatistics_collector -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcl -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcl_interfaces -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcl_logging_interface -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcl_yaml_param_parser -isystem /home/nimesha/ros2_humble/ros2-linux/include/libyaml_vendor -isystem /home/nimesha/ros2_humble/ros2-linux/include/tracetools -isystem /home/nimesha/ros2_humble/ros2-linux/include/statistics_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosgraph_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_typesupport_cpp -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_typesupport_c -isystem /home/nimesha/ros2_humble/ros2-linux/include/rclcpp_action -isystem /home/nimesha/ros2_humble/ros2-linux/include/action_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/unique_identifier_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcl_action -isystem /home/nimesha/ros2_humble/ros2-linux/include/tf2_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/sensor_msgs -isystem /opt/ros/humble/include/octomap_msgs -isystem /opt/ros/humble/include -isystem /opt/ros/humble/include/angles -isystem /opt/ros/humble/include/moveit_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/shape_msgs -isystem /opt/ros/humble/include/object_recognition_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/trajectory_msgs -isystem /usr/include/libqhull_r -isystem /home/nimesha/ros2_humble/ros2-linux/include/resource_retriever -isystem /home/nimesha/thesis/ws_moveit/install/srdfdom/include

CXX_FLAGS = -O3 -DNDEBUG -fPIC -Wall -Wextra -Wwrite-strings -Wunreachable-code -Wpointer-arith -Wredundant-decls -Wcast-qual -Wno-maybe-uninitialized -std=c++17

