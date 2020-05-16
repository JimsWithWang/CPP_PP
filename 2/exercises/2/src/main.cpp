#include <iostream>

int trans(int);

int main(int argc, char *argv[])
{
    int longN;
    std::cout<<"Enter the number of long:"<<std::endl;
    std::cin>>longN;
    std::cout<<longN<<" long = "<<trans(longN)<<" 码"<<std::endl;
    return 0;
}

int trans(int longN)
{
    int result = longN * 220;
    return result;
}