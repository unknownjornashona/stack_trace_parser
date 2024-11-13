#include "StackTrace.h"
#include <iostream>

void StackTrace::push(const std::string& function, const std::string& file, int line) {
    callStack.push({ function, file, line });
}

void StackTrace::pop() {
    callStack.pop();
}

void StackTrace::printDetailed(Logger& logger) {
    std::vector<CallInfo> functions;
    while (!callStack.empty()) {
        functions.push_back(callStack.top());
        callStack.pop();
    }

    logger.log("Detailed Stack Trace:");
    for (const auto& info : functions) {
        std::ostringstream oss;
        oss << "  " << info.function << " at " << info.file << ":" << info.line;
        logger.log(oss.str());
    }
}
