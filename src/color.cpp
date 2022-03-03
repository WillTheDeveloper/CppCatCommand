#include "headers/color.h"
#include <iostream>

using namespace colorN;

enum color{
    red = 1,
    blue = 2,
    purple = 3,
    black = 4,
    white = 5
};

std::string colorN::outputcolor(std::string selection)
{
    switch(selection)
    {
        case red: std::cout << "Red" << std::endl;
        default: std::cout << "Color not defined/found" << std::endl;
    }
}