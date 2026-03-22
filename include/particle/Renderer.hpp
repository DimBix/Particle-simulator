#pragma once

#if defined(__INTELLISENSE__) || !defined(USE_CPP20_MODULES)
#include <vulkan/vulkan_raii.hpp>
#else
import vulkan_hpp;
#endif

class Renderer {
private:
    void initVulkan();
    void cleanUp();
    void createInstance();

    vk::raii::Context  context;
    vk::raii::Instance instance = nullptr;

public:
    Renderer();

};