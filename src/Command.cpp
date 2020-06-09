#include "Command.h"

Command::Command ()
{
  this->name = "";
  this->description = "";
}

Command::Command (std::string name, std::string description)
{
  this->name = name;
  this->description = description;
}

void
Command::print ()
{
  std::cout << "   " << this->name << "  " << this->description << std::endl;
}
