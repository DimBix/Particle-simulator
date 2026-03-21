#include "particle/Application.hpp"
#include <iostream>
#include <memory>

bool Application::initialize() {

    initializeComponents();

}

void Application::initializeComponents(){
    renderer = std::make_unique<Renderer>();
}

void Application::run() {
    std::cout << "Application running.\n";

    //render cycle
}
