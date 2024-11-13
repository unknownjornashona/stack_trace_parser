#ifndef TRACEPARSER_H
#define TRACEPARSER_H

#include "Logger.h"

class ITraceParser {
public:
    virtual void parse(const std::string& trace, Logger& logger) = 0;
    virtual std::string getFormat() const = 0; // 添加获取格式的方法
};

#endif // TRACEPARSER_H
