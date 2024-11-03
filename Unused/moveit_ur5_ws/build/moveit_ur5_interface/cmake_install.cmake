# Install script for directory: /home/nimesha/Thesis/Unused/moveit_ur5_ws/src/ROS2_pick_and_place_UR5/moveit_ur5_interface

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/nimesha/Thesis/Unused/moveit_ur5_ws/install/moveit_ur5_interface")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/src/ROS2_pick_and_place_UR5/moveit_ur5_interface/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsrvcli.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsrvcli.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsrvcli.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/libsrvcli.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsrvcli.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsrvcli.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsrvcli.so"
         OLD_RPATH "/home/nimesha/Thesis/Unused/moveit_ur5_ws/install/moveit_ur5_msgs/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_planning_interface/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_move_group/lib:/home/nimesha/ros2_humble/ros2-linux/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_warehouse/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_planning/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_occupancy_map_monitor/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_core/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/srdfdom/lib:/opt/ros/humble/lib:/opt/ros/humble/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsrvcli.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_interface" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_interface")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_interface"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface" TYPE EXECUTABLE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/moveit_interface")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_interface" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_interface")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_interface"
         OLD_RPATH "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_planning_interface/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_move_group/lib:/home/nimesha/ros2_humble/ros2-linux/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_warehouse/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_planning/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_occupancy_map_monitor/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_core/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/srdfdom/lib:/opt/ros/humble/lib:/opt/ros/humble/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_interface")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_cli_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_cli_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_cli_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface" TYPE EXECUTABLE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/moveit_cli_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_cli_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_cli_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_cli_node"
         OLD_RPATH "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface:/home/nimesha/Thesis/Unused/moveit_ur5_ws/install/moveit_ur5_msgs/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_planning_interface/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_move_group/lib:/home/nimesha/ros2_humble/ros2-linux/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_warehouse/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_planning/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_occupancy_map_monitor/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_core/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/srdfdom/lib:/opt/ros/humble/lib:/opt/ros/humble/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_cli_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_srv_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_srv_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_srv_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface" TYPE EXECUTABLE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/moveit_srv_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_srv_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_srv_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_srv_node"
         OLD_RPATH "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface:/home/nimesha/Thesis/Unused/moveit_ur5_ws/install/moveit_ur5_msgs/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_planning_interface/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_move_group/lib:/home/nimesha/ros2_humble/ros2-linux/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_warehouse/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_planning/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_ros_occupancy_map_monitor/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/moveit_core/lib:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/install/srdfdom/lib:/opt/ros/humble/lib:/opt/ros/humble/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ur5_interface/moveit_srv_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface" TYPE DIRECTORY FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/src/ROS2_pick_and_place_UR5/moveit_ur5_interface/launch")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface/environment" TYPE FILE FILES "/home/nimesha/ros2_humble/ros2-linux/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface/environment" TYPE FILE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/moveit_ur5_interface")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/moveit_ur5_interface")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface/environment" TYPE FILE FILES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface/environment" TYPE FILE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface/environment" TYPE FILE FILES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface/environment" TYPE FILE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface" TYPE FILE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface" TYPE FILE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface" TYPE FILE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface" TYPE FILE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface" TYPE FILE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_index/share/ament_index/resource_index/packages/moveit_ur5_interface")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface/cmake" TYPE FILE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface/cmake" TYPE FILE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface/cmake" TYPE FILE FILES
    "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_core/moveit_ur5_interfaceConfig.cmake"
    "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/ament_cmake_core/moveit_ur5_interfaceConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ur5_interface" TYPE FILE FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/src/ROS2_pick_and_place_UR5/moveit_ur5_interface/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/moveit_ur5_interface/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
