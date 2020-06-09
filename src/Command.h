#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <string>

class Command
{
private:
  std::string name;
  std::string description;

public:
  Command ();
  Command (std::string, std::string);
  void print ();
};

#endif
