#include "JavaTraceParser.h"
#include <sstream>

void JavaTraceParser::parse(const std::string& trace, Logger& logger) {
    std::istringstream stream(trace);
    std::string line;
    while (std::getline(stream, line)) {
        if (line.find("at ") == 0) {
            size_t pos = line.find("at ") + 3;
            size_t end = line.find('(', pos);
            std::string function = line.substr(pos, end - pos);
            logger.log("Java method: " + function);
        }
    }
}
