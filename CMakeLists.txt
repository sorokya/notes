cmake_minimum_required(VERSION 3.10)

project(Notes VERSION 0.1)

configure_file(include/NotesConfig.h.in include/NotesConfig.h)

add_executable(notes src/main.cpp)

target_include_directories(notes PUBLIC
                           "${PROJECT_BINARY_DIR}/include"
                           )

