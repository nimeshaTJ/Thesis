# CMake generated Testfile for 
# Source directory: /home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/collision_detection_fcl
# Build directory: /home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/collision_detection_fcl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_fcl_collision_env]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_fcl_collision_env.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/ament_cmake_gtest/test_fcl_collision_env.txt" "--command" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/collision_detection_fcl/test_fcl_collision_env" "--gtest_output=xml:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_fcl_collision_env.gtest.xml")
set_tests_properties([=[test_fcl_collision_env]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/collision_detection_fcl/test_fcl_collision_env" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/collision_detection_fcl" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/collision_detection_fcl/CMakeLists.txt;53;ament_add_gtest;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/collision_detection_fcl/CMakeLists.txt;0;")
add_test([=[test_fcl_collision_detection]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_fcl_collision_detection.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/ament_cmake_gtest/test_fcl_collision_detection.txt" "--command" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/collision_detection_fcl/test_fcl_collision_detection" "--gtest_output=xml:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_fcl_collision_detection.gtest.xml")
set_tests_properties([=[test_fcl_collision_detection]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/collision_detection_fcl/test_fcl_collision_detection" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/collision_detection_fcl" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/collision_detection_fcl/CMakeLists.txt;56;ament_add_gtest;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/collision_detection_fcl/CMakeLists.txt;0;")
add_test([=[test_fcl_collision_detection_panda]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_fcl_collision_detection_panda.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/ament_cmake_gtest/test_fcl_collision_detection_panda.txt" "--command" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/collision_detection_fcl/test_fcl_collision_detection_panda" "--gtest_output=xml:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_fcl_collision_detection_panda.gtest.xml")
set_tests_properties([=[test_fcl_collision_detection_panda]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/collision_detection_fcl/test_fcl_collision_detection_panda" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/collision_detection_fcl" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/collision_detection_fcl/CMakeLists.txt;59;ament_add_gtest;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/collision_detection_fcl/CMakeLists.txt;0;")
