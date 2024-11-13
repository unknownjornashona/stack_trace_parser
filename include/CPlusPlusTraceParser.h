#ifndef CPLUSPLUSTRACEPARSER_H
#define CPLUSPLUSTRACEPARSER_H

#include "TraceParser.h"

class CPlusPlusTraceParser : public ITraceParser {
public:
    void parse(const std::string& trace, Logger& logger) override;
};

#endif // CPLUSPLUSTRACEPARSER_H
