#ifndef STACKTRACE_H
#define STACKTRACE_H

#include <stack>
#include <string>
#include "Logger.h"

class StackTrace {
public:
    void push(const std::string& function, const std::string& file, int line);
    void pop();
    void printDetailed(Logger& logger);

private:
    struct CallInfo {
        std::string function;
        std::string file;
        int line;
    };
    std::stack<CallInfo> callStack;
};

#endif // STACKTRACE_H
