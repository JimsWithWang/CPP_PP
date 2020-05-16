#include <iostream>

void printBlind();
void printRun();

int main(int argc, char *argv[])
{
    printBlind();
    printBlind();
    printRun();
    printRun();
    return 0;
}

void printBlind()
{
    std::cout<<"Three blind mice"<<std::endl;
}

void printRun()
{
    std::cout<<"See how they run"<<std::endl;
}