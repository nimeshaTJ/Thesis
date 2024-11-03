# CMake generated Testfile for 
# Source directory: /home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/planning_scene
# Build directory: /home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_planning_scene]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/test_results/moveit_core/test_planning_scene.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/ament_cmake_gtest/test_planning_scene.txt" "--append-env" "LD_LIBRARY_PATH=/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene:/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/../utils:/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/../collision_detection_fcl:/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/../collision_detection" "--command" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/test_planning_scene" "--gtest_output=xml:/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/test_results/moveit_core/test_planning_scene.gtest.xml")
set_tests_properties([=[test_planning_scene]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/test_planning_scene" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/planning_scene/CMakeLists.txt;41;ament_add_gtest;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/planning_scene/CMakeLists.txt;0;")
add_test([=[test_collision_objects]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/test_results/moveit_core/test_collision_objects.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/ament_cmake_gtest/test_collision_objects.txt" "--append-env" "LD_LIBRARY_PATH=/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene:/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/../utils:/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/../collision_detection_fcl:/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/../collision_detection" "--command" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/test_collision_objects" "--gtest_output=xml:/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/test_results/moveit_core/test_collision_objects.gtest.xml")
set_tests_properties([=[test_collision_objects]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/test_collision_objects" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/planning_scene/CMakeLists.txt;49;ament_add_gtest;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/planning_scene/CMakeLists.txt;0;")
add_test([=[test_multi_threaded]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/test_results/moveit_core/test_multi_threaded.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/ament_cmake_gtest/test_multi_threaded.txt" "--append-env" "LD_LIBRARY_PATH=/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene:/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/../utils:/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/../collision_detection_fcl:/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/../collision_detection" "--command" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/test_multi_threaded" "--gtest_output=xml:/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/test_results/moveit_core/test_multi_threaded.gtest.xml")
set_tests_properties([=[test_multi_threaded]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene/test_multi_threaded" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_core/planning_scene" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/planning_scene/CMakeLists.txt;53;ament_add_gtest;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/planning_scene/CMakeLists.txt;0;")
