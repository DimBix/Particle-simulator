#include "particle/Application.hpp"
#include <iostream>


int main(){

    try{
        Application app;
        
        if(!app.initialize()){
            std::cerr << "Failed to initialize application" << std::endl;
            return -1;
        }

        app.run();
    
    }catch(const std::exception& e){
        std::cerr << "This error occured while running the application: " << e.what() << std::endl;
        return -1;
    }

    return 0;
}