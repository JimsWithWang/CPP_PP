#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::array;

const int ArSize = 10;

int main(int argc, char *argv[])
{
    array<double, ArSize> donation;
    int i=0;
    double sum = 0.0;
    cout<<"Enter a number: ";
    while(i<ArSize)
    {
        if(cin>>donation[i])
        {
            sum += donation[i++];
            cout<<"Enter a number: ";
        }
        else
        {
            cout<<"That is not a number!"<<endl;
            break;
        }
    }
    cout<<"Sum = "<<sum<<endl;
    cout<<"count = "<<i<<endl;
    cout<<"Average = "<<sum/i<<endl;
    return 0;
}