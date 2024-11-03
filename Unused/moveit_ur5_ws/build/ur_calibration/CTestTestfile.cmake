# CMake generated Testfile for 
# Source directory: /home/nimesha/Thesis/Unused/moveit_ur5_ws/src/Universal_Robots_ROS2_Driver/ur_calibration
# Build directory: /home/nimesha/Thesis/Unused/moveit_ur5_ws/build/ur_calibration
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(calibration_test "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/ur_calibration/test_results/ur_calibration/calibration_test.gtest.xml" "--package-name" "ur_calibration" "--output-file" "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/ur_calibration/ament_cmake_gmock/calibration_test.txt" "--command" "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/ur_calibration/calibration_test" "--gtest_output=xml:/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/ur_calibration/test_results/ur_calibration/calibration_test.gtest.xml")
set_tests_properties(calibration_test PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/ur_calibration/calibration_test" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/Unused/moveit_ur5_ws/build/ur_calibration" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/nimesha/Thesis/Unused/moveit_ur5_ws/src/Universal_Robots_ROS2_Driver/ur_calibration/CMakeLists.txt;84;ament_add_gmock;/home/nimesha/Thesis/Unused/moveit_ur5_ws/src/Universal_Robots_ROS2_Driver/ur_calibration/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
