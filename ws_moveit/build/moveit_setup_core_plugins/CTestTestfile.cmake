# CMake generated Testfile for 
# Source directory: /home/nimesha/thesis/ws_moveit/src/moveit2/moveit_setup_assistant/moveit_setup_core_plugins
# Build directory: /home/nimesha/thesis/ws_moveit/build/moveit_setup_core_plugins
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[lint_cmake]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/thesis/ws_moveit/build/moveit_setup_core_plugins/test_results/moveit_setup_core_plugins/lint_cmake.xunit.xml" "--package-name" "moveit_setup_core_plugins" "--output-file" "/home/nimesha/thesis/ws_moveit/build/moveit_setup_core_plugins/ament_lint_cmake/lint_cmake.txt" "--command" "/home/nimesha/ros2_humble/ros2-linux/bin/ament_lint_cmake" "--xunit-file" "/home/nimesha/thesis/ws_moveit/build/moveit_setup_core_plugins/test_results/moveit_setup_core_plugins/lint_cmake.xunit.xml")
set_tests_properties([=[lint_cmake]=] PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_setup_assistant/moveit_setup_core_plugins" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_setup_assistant/moveit_setup_core_plugins/CMakeLists.txt;74;ament_package;/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_setup_assistant/moveit_setup_core_plugins/CMakeLists.txt;0;")
add_test([=[xmllint]=] "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/thesis/ws_moveit/build/moveit_setup_core_plugins/test_results/moveit_setup_core_plugins/xmllint.xunit.xml" "--package-name" "moveit_setup_core_plugins" "--output-file" "/home/nimesha/thesis/ws_moveit/build/moveit_setup_core_plugins/ament_xmllint/xmllint.txt" "--command" "/home/nimesha/ros2_humble/ros2-linux/bin/ament_xmllint" "--xunit-file" "/home/nimesha/thesis/ws_moveit/build/moveit_setup_core_plugins/test_results/moveit_setup_core_plugins/xmllint.xunit.xml")
set_tests_properties([=[xmllint]=] PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_setup_assistant/moveit_setup_core_plugins" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_setup_assistant/moveit_setup_core_plugins/CMakeLists.txt;74;ament_package;/home/nimesha/thesis/ws_moveit/src/moveit2/moveit_setup_assistant/moveit_setup_core_plugins/CMakeLists.txt;0;")
