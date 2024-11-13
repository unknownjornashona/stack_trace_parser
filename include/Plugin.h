#ifndef PLUGIN_H
#define PLUGIN_H

#include <string>
#include "Logger.h"

class IPlugin {
public:
    virtual ~IPlugin() {}
    virtual void load() = 0;
    virtual void parse(const std::string& stackTrace, Logger& logger) = 0;
};

#endif // PLUGIN_H
