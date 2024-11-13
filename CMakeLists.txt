cmake_minimum_required(VERSION 3.10)

# 设置项目名称和版本
project(StackTraceParser VERSION 1.0)

# 指定 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加包含目录
include_directories(include)

# 查找源文件
file(GLOB SOURCES
    src/*.cpp
)

# 添加可执行文件
add_executable(stack_trace_parser ${SOURCES})

# 查找并链接 JSON 库
find_package(JsonCpp REQUIRED)
if(JsonCpp_FOUND)
    include_directories(${JsonCpp_INCLUDE_DIRS})
    target_link_libraries(stack_trace_parser ${JsonCpp_LIBRARIES})
endif()

# CMake 测试配置
enable_testing()
add_subdirectory(tests)

# 配置文档目录
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/docs)
file(COPY docs/ DESTINATION ${CMAKE_BINARY_DIR}/docs)
