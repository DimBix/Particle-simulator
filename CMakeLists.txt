cmake_minimum_required(VERSION 3.16)

project(ParticleSimulator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Vulkan REQUIRED)
find_package(glfw3 3.3 REQUIRED)

add_executable(ParticleSimulator
    src/main.cpp
    src/Application.cpp
    src/Renderer.cpp
)

target_include_directories(ParticleSimulator PRIVATE include)

target_link_libraries(ParticleSimulator PRIVATE Vulkan::Vulkan glfw)
