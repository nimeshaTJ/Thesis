import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/nimesha/Thesis/moveit_ur5_v2_ws/install/moveit_configs_utils'
