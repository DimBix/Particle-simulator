#include "particle/Application.hpp"
#include <iostream>
#include <memory>
#include <cstdlib>

bool Application::initialize() {

    initializeComponents();
    return true;

}

void Application::initializeComponents(){
    renderer = std::make_unique<Renderer>();
}

void Application::run() {
    std::cout << "Application running.\n";

    //render cycle
}
