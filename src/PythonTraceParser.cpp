#include "PythonTraceParser.h"
#include <sstream>

void PythonTraceParser::parse(const std::string& trace, Logger& logger) {
    std::istringstream stream(trace);
    std::string line;
    while (std::getline(stream, line)) {
        if (line.find("File ") != std::string::npos) {
            logger.log("Python traceback: " + line);
        }
    }
}
