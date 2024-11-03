# CMake generated Testfile for 
# Source directory: /home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception
# Build directory: /home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_ros_perception
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[cppcheck]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_ros_perception/test_results/moveit_ros_perception/cppcheck.xunit.xml" "--package-name" "moveit_ros_perception" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_ros_perception/ament_cppcheck/cppcheck.txt" "--command" "/home/nimesha/ros2_humble/ros2-linux/bin/ament_cppcheck" "--xunit-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_ros_perception/test_results/moveit_ros_perception/cppcheck.xunit.xml" "--include_dirs" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception/depth_image_octomap_updater/include" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception/lazy_free_space_updater/include" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception/mesh_filter/include" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception/point_containment_filter/include" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception/pointcloud_octomap_updater/include" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception/semantic_world/include")
set_tests_properties([=[cppcheck]=] PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;87;ament_cppcheck;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception/CMakeLists.txt;140;ament_package;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception/CMakeLists.txt;0;")
add_test([=[lint_cmake]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_ros_perception/test_results/moveit_ros_perception/lint_cmake.xunit.xml" "--package-name" "moveit_ros_perception" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_ros_perception/ament_lint_cmake/lint_cmake.txt" "--command" "/home/nimesha/ros2_humble/ros2-linux/bin/ament_lint_cmake" "--xunit-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_ros_perception/test_results/moveit_ros_perception/lint_cmake.xunit.xml")
set_tests_properties([=[lint_cmake]=] PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception/CMakeLists.txt;140;ament_package;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception/CMakeLists.txt;0;")
add_test([=[xmllint]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_ros_perception/test_results/moveit_ros_perception/xmllint.xunit.xml" "--package-name" "moveit_ros_perception" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_ros_perception/ament_xmllint/xmllint.txt" "--command" "/home/nimesha/ros2_humble/ros2-linux/bin/ament_xmllint" "--xunit-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/build/moveit_ros_perception/test_results/moveit_ros_perception/xmllint.xunit.xml")
set_tests_properties([=[xmllint]=] PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception/CMakeLists.txt;140;ament_package;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_ros/perception/CMakeLists.txt;0;")
subdirs("lazy_free_space_updater")
subdirs("point_containment_filter")
subdirs("pointcloud_octomap_updater")
subdirs("mesh_filter")
subdirs("depth_image_octomap_updater")
subdirs("semantic_world")
