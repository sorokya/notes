#include <iostream>
#include <string>
#include <array>
#include "NotesConfig.h"

void print_help();

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        print_help();
        return 1;
    }
 
    return 0;
}

void print_help()
{
    std::cout << "Notes Version " << Notes_VERSION_MAJOR << "."
              << Notes_VERSION_MINOR << std::endl;
    
    std::cout << "usage: notes <command> [<args>]" << std::endl;

    std::array<std::string, 3> commands;
    std::array<std::string, 3> descriptions;

    commands[0] = "new";
    descriptions[0] = "   Create a new note file";

    commands[1] = "search";
    descriptions[1] = "Search through notes";

    commands[2] = "list";
    descriptions[2] = "  Print out a list of all notes";

    for (int i = 0; i < 3; i += 1)
    {
        std::cout << "   " << commands[i]
                  << "  " << descriptions[i]
                  << std::endl;
    }
}
