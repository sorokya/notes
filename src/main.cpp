#include "Command.h"
#include "NotesConfig.h"
#include <array>
#include <iostream>

void print_help ();

int
main (int argc, char *argv[])
{
  if (argc < 2)
    {
      print_help ();
      return 1;
    }

  return 0;
}

void
print_help ()
{
  std::cout << "Notes Version " << Notes_VERSION_MAJOR << "."
            << Notes_VERSION_MINOR << std::endl;

  std::cout << "usage: notes <command> [<args>]" << std::endl;

  std::array<Command, 3> commands;

  commands[0] = Command ("new", "   Create a new note file");
  commands[1] = Command ("search", "Search through notes");
  commands[2] = Command ("list", "  Print out a list of all notes");

  for (int i = 0; i < 3; i += 1)
    {
      commands[i].print ();
    }
}
