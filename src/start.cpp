#include "Setup.h"
#include<iostream>

using namespace std;
int main(int ac, char** av)
{
    cout<<"So pra saber se ta fumegando"<<endl;
    Setup* cSetup = new Setup();
    cSetup->printHello("123");
    delete cSetup;
    
    return 0;
}