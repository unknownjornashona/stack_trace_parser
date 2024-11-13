#ifndef PYTHONTRACEPARSER_H
#define PYTHONTRACEPARSER_H

#include "TraceParser.h"

class PythonTraceParser : public ITraceParser {
public:
    void parse(const std::string& trace, Logger& logger) override;
};

#endif // PYTHONTRACEPARSER_H
