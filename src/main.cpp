#include <iostream>
#include <unordered_map>
#include <vector>
#include "Logger.h"
#include "StackTrace.h"
#include "JavaTraceParser.h"
#include "PythonTraceParser.h"
#include "CPlusPlusTraceParser.h"
#include "Config.h"
#include "Plugin.h" // Assuming that Plugin.h contains the IPlugin interface
#include "PluginLoader.cpp" // Include your PluginLoader implementation

void runExample(Logger& logger) {
    StackTrace stackTrace;
    try {
        stackTrace.push("myFunction", __FILE__, __LINE__);
        throw std::runtime_error("An error has occurred in myFunction");
    }
    catch (const std::exception& e) {
        logger.log("Caught exception: " + std::string(e.what()));
        stackTrace.printDetailed(logger);
    }
}

int main(int argc, char* argv[]) {
    std::string logFileName = "log.txt";
    std::string configFile = "config.json";

    try {
        Logger logger(logFileName);
        std::unordered_map<std::string, std::string> config;

        parseConfig(configFile, config);

        logger.log("Application Starting...");

        runExample(logger);

        // 创建解析器
        JavaTraceParser javaParser;
        PythonTraceParser pythonParser;
        CPlusPlusTraceParser cppParser;

        // 从配置文件中读取示例堆栈跟踪
        std::string javaStack = config["java_stack"];
        std::string pythonStack = config["python_stack"];
        std::string cppStack = config["cpp_stack"];

        // 多线程解析示例
        std::vector<std::thread> threads;
        threads.push_back(std::thread(parseStackTrace, javaStack, std::ref(javaParser), std::ref(logger)));
        threads.push_back(std::thread(parseStackTrace, pythonStack, std::ref(pythonParser), std::ref(logger)));
        threads.push_back(std::thread(parseStackTrace, cppStack, std::ref(cppParser), std::ref(logger)));

        // 等待所有线程结束
        for (auto& t : threads) {
            t.join();
        }

        // 插件机制加载示例
        PluginLoader loader;
        IPlugin* plugin = loader.loadPlugin("path_to_plugin.so"); // 请替换为实际路径
        if (plugin) {
            plugin->load();
            std::string sampleStack = "..."; // 这里是用户定义的堆栈跟踪
            plugin->parse(sampleStack, logger);
            delete plugin; // 清理插件
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
