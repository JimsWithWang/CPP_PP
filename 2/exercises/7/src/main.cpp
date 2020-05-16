#include <iostream>

void transValue(int hours, int minutes);

int main(int argc, char *argv[])
{
    int hours, minutes;
    std::cout<<"Enter the number of hours:";
    std::cin>>hours;
    std::cout<<"Enter the number of minutes:";
    std::cin>>minutes;
    transValue(hours,minutes);
    return 0;
}

void transValue(int hours, int minutes)
{
    std::cout<<"Time: "<<hours<<":"<<minutes<<std::endl;
}