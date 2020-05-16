#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;

using std::array;

const int ArSize = 16;

int main(int argc, char *argv[])
{
    array<long long, ArSize> factorials;
    factorials[1] = factorials[0] = 1LL;
    for(int i=2;i<ArSize;i++)
    {
        factorials[i] = i *factorials[i-1];
    }
    for(int i=0;i<ArSize;i++)
    {
        cout<<i<<"! = "<<factorials[i]<<endl;
    }
    return 0;
}