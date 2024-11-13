#ifndef JAVATRACEPARSER_H
#define JAVATRACEPARSER_H

#include "TraceParser.h"

class JavaTraceParser : public ITraceParser {
public:
    void parse(const std::string& trace, Logger& logger) override;
};

#endif // JAVATRACEPARSER_H
