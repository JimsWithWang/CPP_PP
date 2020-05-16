#include <iostream>

int caculateMonth(int year);

int main(int argc, char *argv[])
{
    int age;
    std::cout<<"Enter your age:";
    std::cin>>age;
    std::cout<<"Include "<<caculateMonth(age)<<" month"<<std::endl;
    return 0;
}

int caculateMonth(int year)
{
    int result = year*12;
    return result;
}