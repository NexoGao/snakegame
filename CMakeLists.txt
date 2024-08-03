cmake_minimum_required(VERSION 3.28)
project(snake)

# Add SFML
set(SFML_DIR "C:/SFML/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS system window graphics audio REQUIRED)

# Include directories
include_directories(${SFML_INCLUDE_DIRS})

# Add executable
add_executable(snake main.cpp
        Snake.cpp
        Snake.h
        Pos.cpp
        GameDesign.h)

# Link libraries
target_link_libraries(snake sfml-system sfml-window sfml-graphics sfml-audio)
