#include <iostream>
#include <string>
#include <fstream>

#include "src/headers/language.h"
using namespace languageN;

int main()
{
    std::string outPut;

    int count = 0;

    std::string filepath = "tests/helloworld.txt";

    std::ifstream MyFile(filepath);

    std::cout << "==================CAT==================" << std::endl;

    while(getline(MyFile, outPut))
    {
        ++count;
        std::cout << count << "| ";
        std::cout << outPut << std::endl;
    }

    std::string thing = filepath.substr(filepath.find(".") + 1);

    std::cout << "=======================================" << std::endl;
    std::cout << "Lines of code: " << count << std::endl;
    std::cout << "File name:" << "placeholder" << std::endl;
    std::cout << "Language: " << languageN::DetermineLanguage(thing) << std::endl;
    std::cout << "=======================================" << std::endl;
}