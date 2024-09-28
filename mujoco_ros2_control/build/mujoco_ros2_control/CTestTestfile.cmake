# CMake generated Testfile for 
# Source directory: /home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control
# Build directory: /home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(clang_format "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/test_results/mujoco_ros2_control/clang_format.xunit.xml" "--package-name" "mujoco_ros2_control" "--output-file" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/ament_clang_format/clang_format.txt" "--command" "/home/nimesha/ros2_humble/ros2-linux/bin/ament_clang_format" "--xunit-file" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/test_results/mujoco_ros2_control/clang_format.xunit.xml" "--config" "/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control/../.clang-format")
set_tests_properties(clang_format PROPERTIES  LABELS "clang_format;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_clang_format/cmake/ament_clang_format.cmake;57;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_clang_format/cmake/ament_cmake_clang_format_lint_hook.cmake;27;ament_clang_format;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_clang_format/cmake/ament_cmake_clang_format_lint_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control/CMakeLists.txt;72;ament_package;/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/test_results/mujoco_ros2_control/cppcheck.xunit.xml" "--package-name" "mujoco_ros2_control" "--output-file" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/ament_cppcheck/cppcheck.txt" "--command" "/home/nimesha/ros2_humble/ros2-linux/bin/ament_cppcheck" "--xunit-file" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/test_results/mujoco_ros2_control/cppcheck.xunit.xml" "--include_dirs" "/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;87;ament_cppcheck;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control/CMakeLists.txt;72;ament_package;/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/test_results/mujoco_ros2_control/cpplint.xunit.xml" "--package-name" "mujoco_ros2_control" "--output-file" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/ament_cpplint/cpplint.txt" "--command" "/home/nimesha/ros2_humble/ros2-linux/bin/ament_cpplint" "--xunit-file" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/test_results/mujoco_ros2_control/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;39;ament_cpplint;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control/CMakeLists.txt;72;ament_package;/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/test_results/mujoco_ros2_control/lint_cmake.xunit.xml" "--package-name" "mujoco_ros2_control" "--output-file" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/ament_lint_cmake/lint_cmake.txt" "--command" "/home/nimesha/ros2_humble/ros2-linux/bin/ament_lint_cmake" "--xunit-file" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/test_results/mujoco_ros2_control/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control/CMakeLists.txt;72;ament_package;/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control/CMakeLists.txt;0;")
add_test(copyright "/usr/bin/python3" "-u" "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/test_results/mujoco_ros2_control/copyright.xunit.xml" "--package-name" "mujoco_ros2_control" "--output-file" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/ament_copyright/copyright.txt" "--command" "/home/nimesha/ros2_humble/ros2-linux/bin/ament_copyright" "--xunit-file" "/home/nimesha/Thesis/mujoco_ros2_control/build/mujoco_ros2_control/test_results/mujoco_ros2_control/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "200" WORKING_DIRECTORY "/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control" _BACKTRACE_TRIPLES "/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_copyright/cmake/ament_copyright.cmake;51;ament_add_test;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;22;ament_copyright;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/nimesha/ros2_humble/ros2-linux/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/nimesha/ros2_humble/ros2-linux/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control/CMakeLists.txt;72;ament_package;/home/nimesha/Thesis/mujoco_ros2_control/mujoco_ros2_control/CMakeLists.txt;0;")
