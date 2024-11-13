#include <fstream>
#include <sstream>
#include <json/json.h>
#include <stdexcept>
#include "Config.h"

void parseConfig(const std::string& filename, std::unordered_map<std::string, std::string>& config) {
    std::ifstream configFile(filename);
    Json::Value root;
    Json::CharReaderBuilder readerBuilder;
    std::string errs;

    if (Json::parseFromStream(readerBuilder, configFile, &root, &errs)) {
        for (const auto& key : root.getMemberNames()) {
            config[key] = root[key].asString();
        }
    } else {
        throw std::runtime_error("Failed to parse config file: " + errs);
    }
}
