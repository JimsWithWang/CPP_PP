#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    cout<<"Enter an integer:";
    int by;
    cin>>by;
    cout<<"Counting by "<<by<<"S:\n";
    for(int i=0;i<100;i+=by)
    {
        cout<<i<<endl;
    }
    return 0;
}