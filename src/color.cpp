#include "./headers/color.h"

enum color{
    red,
    blue,
    purple,
    black,
    white
}

std::string outputcolor()
{
    switch(color)
    {
        default: std::cout << "Color not defined/found" << std::endl;
    }
}