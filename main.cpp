#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string outPut;


    std::ifstream MyFile("/tests/helloworld.txt");

    while(getline(MyFile, outPut))
    {
        std::cout << outPut << std::endl;
    }

}