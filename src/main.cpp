#include "particle/Application.hpp"
#include <iostream>
#include <cstdlib>


int main(){

    try{
        Application app;
        
        if(!app.initialize()){
            std::cerr << "Failed to initialize application" << std::endl;
            return EXIT_FAILURE;
        }

        app.run();
    
    }catch(const std::exception& e){
        std::cerr << "This error occured while running the application: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}