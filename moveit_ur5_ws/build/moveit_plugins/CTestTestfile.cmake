# CMake generated Testfile for 
# Source directory: /home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_plugins/moveit_plugins
# Build directory: /home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_plugins
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[copyright]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_plugins/test_results/moveit_plugins/copyright.xunit.xml" "--package-name" "moveit_plugins" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_plugins/ament_copyright/copyright.txt" "--command" "/home/nimesha/ros2_humble/ros2-linux/bin/ament_copyright" "--xunit-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_plugins/test_results/moveit_plugins/copyright.xunit.xml")
set_tests_properties([=[copyright]=] PROPERTIES  LABELS "copyright;linter" TIMEOUT "200" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_plugins/moveit_plugins" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_copyright/cmake/ament_copyright.cmake;51;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;22;ament_copyright;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_plugins/moveit_plugins/CMakeLists.txt;10;ament_package;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_plugins/moveit_plugins/CMakeLists.txt;0;")
add_test([=[lint_cmake]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_plugins/test_results/moveit_plugins/lint_cmake.xunit.xml" "--package-name" "moveit_plugins" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_plugins/ament_lint_cmake/lint_cmake.txt" "--command" "/home/nimesha/ros2_humble/ros2-linux/bin/ament_lint_cmake" "--xunit-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_plugins/test_results/moveit_plugins/lint_cmake.xunit.xml")
set_tests_properties([=[lint_cmake]=] PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_plugins/moveit_plugins" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_plugins/moveit_plugins/CMakeLists.txt;10;ament_package;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_plugins/moveit_plugins/CMakeLists.txt;0;")
add_test([=[xmllint]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_plugins/test_results/moveit_plugins/xmllint.xunit.xml" "--package-name" "moveit_plugins" "--output-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_plugins/ament_xmllint/xmllint.txt" "--command" "/home/nimesha/ros2_humble/ros2-linux/bin/ament_xmllint" "--xunit-file" "/home/nimesha/Thesis/moveit_ur5_v2_ws/build/moveit_plugins/test_results/moveit_plugins/xmllint.xunit.xml")
set_tests_properties([=[xmllint]=] PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_plugins/moveit_plugins" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_plugins/moveit_plugins/CMakeLists.txt;10;ament_package;/home/nimesha/Thesis/moveit_ur5_v2_ws/src/ws_moveit/src/moveit2/moveit_plugins/moveit_plugins/CMakeLists.txt;0;")
