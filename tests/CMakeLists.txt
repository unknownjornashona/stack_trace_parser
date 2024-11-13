# 添加测试可执行文件
add_executable(test_stack_trace test_main.cpp)

# 链接与项目相关的库
target_link_libraries(test_stack_trace stack_trace_parser)

# 添加测试
enable_testing()
add_test(NAME StackTraceTests COMMAND test_stack_trace)
