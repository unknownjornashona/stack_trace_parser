#include <dlfcn.h>
#include <iostream>
#include <vector>
#include "Plugin.h"

class PluginLoader {
public:
    IPlugin* loadPlugin(const std::string& path) {
        void* handle = dlopen(path.c_str(), RTLD_LAZY);
        if (!handle) {
            std::cerr << "Cannot load library: " << dlerror() << std::endl;
            return nullptr;
        }

        // 重置错误
        dlerror();

        // 创建一个插件实例
        IPlugin* (*create)();
        create = (IPlugin*(*)())dlsym(handle, "create");
        const char* dlsym_error = dlerror();
        if (dlsym_error) {
            std::cerr << "Cannot load symbol create: " << dlsym_error << std::endl;
            dlclose(handle);
            return nullptr;
        }

        return create();
    }
};
