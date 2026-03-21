#pragma once
#include "particle/Renderer.hpp"
#include <memory>

class Application {

private:
    
    std::unique_ptr<Renderer> renderer;
    void initializeComponents();



public:
    bool initialize();
    void run();
};
