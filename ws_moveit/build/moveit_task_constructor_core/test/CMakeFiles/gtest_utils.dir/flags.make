# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# compile CXX with /usr/bin/c++
CXX_DEFINES = -DBOOST_ALL_NO_LIB -DBOOST_ATOMIC_DYN_LINK -DBOOST_CHRONO_DYN_LINK -DBOOST_DATE_TIME_DYN_LINK -DBOOST_FILESYSTEM_DYN_LINK -DBOOST_IOSTREAMS_DYN_LINK -DBOOST_PROGRAM_OPTIONS_DYN_LINK -DBOOST_REGEX_DYN_LINK -DBOOST_SERIALIZATION_DYN_LINK -DBOOST_SYSTEM_DYN_LINK -DBOOST_THREAD_DYN_LINK -DDEFAULT_RMW_IMPLEMENTATION=rmw_fastrtps_cpp -DFMT_LOCALE -DFMT_SHARED -Dgtest_utils_EXPORTS

CXX_INCLUDES = -I/home/nimesha/ros2_humble/ros2-linux/src/gmock_vendor/include -I/home/nimesha/ros2_humble/ros2-linux/src/gtest_vendor/include -I/home/nimesha/thesis/ws_moveit/src/moveit_task_constructor/core/include -I/home/nimesha/thesis/ws_moveit/src/moveit_task_constructor/core/src -isystem /usr/include/bullet -isystem /home/nimesha/thesis/ws_moveit/install/moveit_core/include -isystem /home/nimesha/ros2_humble/ros2-linux/include/rclcpp -isystem /home/nimesha/ros2_humble/ros2-linux/include/ament_index_cpp -isystem /home/nimesha/ros2_humble/ros2-linux/include/libstatistics_collector -isystem /home/nimesha/ros2_humble/ros2-linux/include/builtin_interfaces -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_runtime_c -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcutils -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_typesupport_interface -isystem /home/nimesha/ros2_humble/ros2-linux/include/fastcdr -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_runtime_cpp -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_typesupport_fastrtps_cpp -isystem /home/nimesha/ros2_humble/ros2-linux/include/rmw -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_typesupport_fastrtps_c -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_typesupport_introspection_c -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_typesupport_introspection_cpp -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcl -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcl_interfaces -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcl_logging_interface -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcl_yaml_param_parser -isystem /home/nimesha/ros2_humble/ros2-linux/include/libyaml_vendor -isystem /home/nimesha/ros2_humble/ros2-linux/include/tracetools -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcpputils -isystem /home/nimesha/ros2_humble/ros2-linux/include/statistics_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosgraph_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_typesupport_cpp -isystem /home/nimesha/ros2_humble/ros2-linux/include/rosidl_typesupport_c -isystem /home/nimesha/ros2_humble/ros2-linux/include/urdf -isystem /home/nimesha/ros2_humble/ros2-linux/include/urdf_parser_plugin -isystem /home/nimesha/ros2_humble/ros2-linux/include/urdfdom_headers -isystem /home/nimesha/ros2_humble/ros2-linux/include/urdfdom -isystem /home/nimesha/ros2_humble/ros2-linux/include/pluginlib -isystem /home/nimesha/ros2_humble/ros2-linux/include/class_loader -isystem /home/nimesha/ros2_humble/ros2-linux/include/visualization_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/geometry_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/std_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/sensor_msgs -isystem /opt/ros/humble/include/octomap_msgs -isystem /opt/ros/humble/include -isystem /home/nimesha/ros2_humble/ros2-linux/include/tf2_eigen -isystem /home/nimesha/ros2_humble/ros2-linux/include/tf2 -isystem /home/nimesha/ros2_humble/ros2-linux/include/tf2_ros -isystem /home/nimesha/ros2_humble/ros2-linux/include/message_filters -isystem /home/nimesha/ros2_humble/ros2-linux/include/rclcpp_action -isystem /home/nimesha/ros2_humble/ros2-linux/include/action_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/unique_identifier_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcl_action -isystem /home/nimesha/ros2_humble/ros2-linux/include/tf2_msgs -isystem /usr/include/eigen3 -isystem /usr/include/libqhull_r -isystem /home/nimesha/ros2_humble/ros2-linux/include/resource_retriever -isystem /home/nimesha/ros2_humble/ros2-linux/include/shape_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/tf2_geometry_msgs -isystem /opt/ros/humble/include/angles -isystem /opt/ros/humble/include/moveit_msgs -isystem /opt/ros/humble/include/object_recognition_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/trajectory_msgs -isystem /home/nimesha/thesis/ws_moveit/install/srdfdom/include -isystem /home/nimesha/thesis/ws_moveit/install/moveit_core/include/moveit_butterworth_parameters -isystem /opt/ros/humble/include/parameter_traits -isystem /opt/ros/humble/include/rsl -isystem /home/nimesha/ros2_humble/ros2-linux/include/rclcpp_lifecycle -isystem /home/nimesha/ros2_humble/ros2-linux/include/rcl_lifecycle -isystem /home/nimesha/ros2_humble/ros2-linux/include/lifecycle_msgs -isystem /home/nimesha/ros2_humble/ros2-linux/include/kdl_parser -isystem /home/nimesha/thesis/ws_moveit/install/moveit_ros_planning/include -isystem /home/nimesha/thesis/ws_moveit/install/moveit_ros_occupancy_map_monitor/include -isystem /home/nimesha/thesis/ws_moveit/install/moveit_ros_planning_interface/include -isystem /home/nimesha/thesis/ws_moveit/install/moveit_ros_move_group/include -isystem /home/nimesha/ros2_humble/ros2-linux/include/std_srvs -isystem /home/nimesha/thesis/ws_moveit/install/moveit_ros_warehouse/include -isystem /home/nimesha/thesis/ws_moveit/install/moveit_task_constructor_msgs/include/moveit_task_constructor_msgs -isystem /home/nimesha/thesis/ws_moveit/install/rviz_marker_tools/include

CXX_FLAGS = -O3 -DNDEBUG -fPIC -Wall -Wextra -Wwrite-strings -Wunreachable-code -Wpointer-arith -Wredundant-decls -Wcast-qual -Wno-maybe-uninitialized -fvisibility-inlines-hidden -std=c++17

