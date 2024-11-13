#include "CPlusPlusTraceParser.h"

void CPlusPlusTraceParser::parse(const std::string& trace, Logger& logger) {
    std::istringstream stream(trace);
    std::string line;
    while (std::getline(stream, line)) {
        if (line.find("at ") == 0) {
            std::string function = line.substr(3); 
            logger.log("C++ method: " + function);
        }
    }
}
