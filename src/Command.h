#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <iostream>

class Command
{
    private:
        std::string name;
        std::string description;

    public:
        Command ();
        Command (std::string, std::string);
        void print();
};

#endif
