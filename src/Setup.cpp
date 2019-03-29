#include "Setup.h"

Setup::Setup()
{
    std::cout << "construindo classe..." << std::endl;
}

Setup::~Setup()
{
    std::cout << "destruindo classe..." << std::endl;
}

Setup::printHello(std::string txtPrint)
{
    std::cout<<txtPrint<<std::endl;
    return 0;
}
