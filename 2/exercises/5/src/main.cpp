#include <iostream>

double transValue(double value);

int main(int argc, char *argv[])
{
    double value;
    std::cout<<"Please enter a Celsius value:";
    std::cin>>value;
    std::cout<<value<<" degrees Celsius is "<<transValue(value)<<" degrees Fahrenheit."<<std::endl;
    return 0;
}

double transValue(double value)
{
    double result = value*1.8+32.0;
    return result;
}