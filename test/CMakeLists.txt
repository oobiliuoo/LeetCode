cmake_minimum_required(VERSION 3.5)

project(LeetCode)

# 设置C++标准
set(cmake_cxx_standard 14)
# 检查编译器是否符合标准
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#设置生成可执行文件的路径
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

#-------------添加外部库
set(SDK_DIR D:\\liubo\\workspace\\project\\THE_FOOL\\SAVISION_VSC\\_deps)
#-----gtest
#-----gtest
set(GTEST_PATH ${SDK_DIR}/gtest/lib/Release)
set(GTEST_LIB gtest)
If(CMAKE_BUILD_TYPE STREQUAL "Debug")
# 调试构建
    set(GTEST_PATH ${SDK_DIR}/gtest/lib/Debug)
endif()

include_directories(${SDK_DIR}/gtest/include)
add_library(${GTEST_LIB} STATIC IMPORTED)
link_directories(${GTEST_PATH})
set_target_properties(${GTEST_LIB} PROPERTIES 
    IMPORTED_LOCATION ${GTEST_PATH}/gtest.lib
)


add_executable(LeetCode main.cpp)

target_link_libraries(LeetCode
    PUBLIC 
        gtest 
)

# Enable testing
enable_testing()

# Define test
add_test(NAME LeetCode COMMAND LeetCode --gtest_filter=Test9.*)
