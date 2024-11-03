# Install script for directory: /home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit_task_constructor/visualization/motion_planning_tasks/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_task_constructor_visualization")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmotion_planning_tasks_rviz_plugin.so.0.1.3" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmotion_planning_tasks_rviz_plugin.so.0.1.3")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmotion_planning_tasks_rviz_plugin.so.0.1.3"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_task_constructor_visualization/motion_planning_tasks/src/libmotion_planning_tasks_rviz_plugin.so.0.1.3")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmotion_planning_tasks_rviz_plugin.so.0.1.3" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmotion_planning_tasks_rviz_plugin.so.0.1.3")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmotion_planning_tasks_rviz_plugin.so.0.1.3"
         OLD_RPATH "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_task_constructor_visualization/motion_planning_tasks/utils:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_task_constructor_visualization/motion_planning_tasks/properties:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_task_constructor_visualization/visualization_tools:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_task_constructor_core/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/rviz_marker_tools/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_task_constructor_msgs/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_visualization/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_robot_interaction/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_planning_interface/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_warehouse/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_move_group/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_planning/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_occupancy_map_monitor/lib:/home/nimesha/ros2_humble/ros2-linux/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_core/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/srdfdom/lib:/opt/ros/humble/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/nimesha/ros2_humble/ros2-linux/opt/rviz_ogre_vendor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmotion_planning_tasks_rviz_plugin.so.0.1.3")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmotion_planning_tasks_rviz_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmotion_planning_tasks_rviz_plugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmotion_planning_tasks_rviz_plugin.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_task_constructor_visualization/motion_planning_tasks/src/libmotion_planning_tasks_rviz_plugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmotion_planning_tasks_rviz_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmotion_planning_tasks_rviz_plugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmotion_planning_tasks_rviz_plugin.so"
         OLD_RPATH "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_task_constructor_visualization/motion_planning_tasks/utils:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_task_constructor_visualization/motion_planning_tasks/properties:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_task_constructor_visualization/visualization_tools:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_task_constructor_core/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/rviz_marker_tools/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_task_constructor_msgs/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_visualization/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_robot_interaction/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_planning_interface/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_warehouse/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_move_group/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_planning/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_occupancy_map_monitor/lib:/home/nimesha/ros2_humble/ros2-linux/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_core/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/srdfdom/lib:/opt/ros/humble/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/nimesha/ros2_humble/ros2-linux/opt/rviz_ogre_vendor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmotion_planning_tasks_rviz_plugin.so")
    endif()
  endif()
endif()

