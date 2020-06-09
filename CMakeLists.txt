cmake_minimum_required(VERSION 3.10)

project(Notes VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES src/main.cpp src/Command.cpp)

configure_file(src/NotesConfig.h.in src/NotesConfig.h)

add_executable(notes ${SOURCES})

target_include_directories(notes PUBLIC
                           "${PROJECT_BINARY_DIR}/src"
                           )
