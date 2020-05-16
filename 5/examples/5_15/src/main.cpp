#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int ArSize = 20;

int main(int argc, char *argv[])
{
    int n;

    cout<<"Enter number in the range 1-10 to find ";
    cout<<"my favarite number\n";
    do
    {
        cin>>n;
    } while (n!=7);
    cout<<"Yes, 7 is my favorite.\n";

    return 0;
}