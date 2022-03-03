#include "headers/language.h"
#include <string>
#include <iostream>

using namespace languageN;

enum extensions {
    txt,
    cpp,
    css,
    html
}

std::string languageN::DetermineLanguage(std::string extension){
    switch(extension){
        case txt: return "Text"; break;
        case cpp: return "C++"; break;
        case css: return "Cascading Style Sheet"; break;
        case html: return "HyperText Markup Language"; break;
    }
}