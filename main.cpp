#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string outPut;

    int count = 0;

    std::ifstream MyFile("./tests/helloworld.txt");

    while(getline(MyFile, outPut))
    {
        ++count;
        std::cout << count << "| ";
        std::cout << outPut << std::endl;
    }

    std::cout << "Lines of code: " << count << std::endl;

}