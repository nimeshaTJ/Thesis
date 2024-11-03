# CMake generated Testfile for 
# Source directory: /home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/robot_state
# Build directory: /home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_robot_state]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_robot_state.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/ament_cmake_gtest/test_robot_state.txt" "--append-env" "LD_LIBRARY_PATH=/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state" "LD_LIBRARY_PATH=/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state/../utils" "--command" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state/test_robot_state" "--gtest_output=xml:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_robot_state.gtest.xml")
set_tests_properties([=[test_robot_state]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state/test_robot_state" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/robot_state/CMakeLists.txt;37;ament_add_gtest;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/robot_state/CMakeLists.txt;0;")
add_test([=[test_robot_state_benchmark]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_robot_state_benchmark.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/ament_cmake_gtest/test_robot_state_benchmark.txt" "--command" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state/test_robot_state_benchmark" "--gtest_output=xml:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_robot_state_benchmark.gtest.xml")
set_tests_properties([=[test_robot_state_benchmark]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state/test_robot_state_benchmark" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/robot_state/CMakeLists.txt;48;ament_add_gtest;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/robot_state/CMakeLists.txt;0;")
add_test([=[test_robot_state_complex]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_robot_state_complex.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/ament_cmake_gtest/test_robot_state_complex.txt" "--command" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state/test_robot_state_complex" "--gtest_output=xml:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_robot_state_complex.gtest.xml")
set_tests_properties([=[test_robot_state_complex]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state/test_robot_state_complex" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/robot_state/CMakeLists.txt;56;ament_add_gtest;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/robot_state/CMakeLists.txt;0;")
add_test([=[test_aabb]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_aabb.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/ament_cmake_gtest/test_aabb.txt" "--command" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state/test_aabb" "--gtest_output=xml:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_aabb.gtest.xml")
set_tests_properties([=[test_aabb]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state/test_aabb" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/robot_state/CMakeLists.txt;64;ament_add_gtest;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/robot_state/CMakeLists.txt;0;")
add_test([=[test_cartesian_interpolator]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_cartesian_interpolator.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/ament_cmake_gtest/test_cartesian_interpolator.txt" "--command" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state/test_cartesian_interpolator" "--gtest_output=xml:/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/test_results/moveit_core/test_cartesian_interpolator.gtest.xml")
set_tests_properties([=[test_cartesian_interpolator]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state/test_cartesian_interpolator" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_core/robot_state" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/robot_state/CMakeLists.txt;72;ament_add_gtest;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_core/robot_state/CMakeLists.txt;0;")
