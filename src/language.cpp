#include "headers/language.h"
#include <iostream>

using namespace languageN;

enum extensions {
    txt = 1,
    cpp = 2,
    css = 3,
    html = 4
};

std::string languageN::DetermineLanguage(std::string extension){
    switch(extension){
        case txt: return "Text"; break;
        case cpp: return "C++"; break;
        case css: return "Cascading Style Sheet"; break;
        case html: return "HyperText Markup Language"; break;
    }
}