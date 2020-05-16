#include <iostream>

double transValue(double value);

int main(int argc, char *argv[])
{
    double value;
    std::cout<<"Enter the number of light years:";
    std::cin>>value;
    std::cout<<value<<" light years = "<<transValue(value)<<" astronomica units."<<std::endl;
    return 0;
}

double transValue(double value)
{
    double result = value*63240;
    return result;
}