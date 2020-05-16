#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;
    long long sumAll,sumUS;
    cout<<"Enter the world's population:";
    cin>>sumAll;
    cout<<"Enter the population of US:";
    cin>>sumUS;
    cout<<"The population of the US in "<<static_cast<float>(sumUS)/sumAll*100.0<<"% of the world population."<<endl;
    return 0;
}