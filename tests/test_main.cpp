#include <iostream>
#include <cassert>
#include "../include/Logger.h"

void testLogger() {
    Logger logger("test_log.txt");
    logger.log("Test message");
    // 这里可以进一步实现对日志文件的验证
}

int main() {
    testLogger();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}