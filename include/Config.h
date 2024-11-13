#ifndef CONFIG_H
#define CONFIG_H

#include <unordered_map>
#include <string>

void parseConfig(const std::string& filename, std::unordered_map<std::string, std::string>& config);

#endif // CONFIG_H
