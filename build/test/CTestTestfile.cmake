# CMake generated Testfile for 
# Source directory: D:/liubo/learn/project/LeetCode/test
# Build directory: D:/liubo/learn/project/LeetCode/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(LeetCode "D:/liubo/learn/project/LeetCode/build/bin/Debug/LeetCode.exe" "--gtest_filter=Test9.*")
  set_tests_properties(LeetCode PROPERTIES  _BACKTRACE_TRIPLES "D:/liubo/learn/project/LeetCode/test/CMakeLists.txt;43;add_test;D:/liubo/learn/project/LeetCode/test/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(LeetCode "D:/liubo/learn/project/LeetCode/build/bin/Release/LeetCode.exe" "--gtest_filter=Test9.*")
  set_tests_properties(LeetCode PROPERTIES  _BACKTRACE_TRIPLES "D:/liubo/learn/project/LeetCode/test/CMakeLists.txt;43;add_test;D:/liubo/learn/project/LeetCode/test/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(LeetCode "D:/liubo/learn/project/LeetCode/build/bin/MinSizeRel/LeetCode.exe" "--gtest_filter=Test9.*")
  set_tests_properties(LeetCode PROPERTIES  _BACKTRACE_TRIPLES "D:/liubo/learn/project/LeetCode/test/CMakeLists.txt;43;add_test;D:/liubo/learn/project/LeetCode/test/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(LeetCode "D:/liubo/learn/project/LeetCode/build/bin/RelWithDebInfo/LeetCode.exe" "--gtest_filter=Test9.*")
  set_tests_properties(LeetCode PROPERTIES  _BACKTRACE_TRIPLES "D:/liubo/learn/project/LeetCode/test/CMakeLists.txt;43;add_test;D:/liubo/learn/project/LeetCode/test/CMakeLists.txt;0;")
else()
  add_test(LeetCode NOT_AVAILABLE)
endif()
