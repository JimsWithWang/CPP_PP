#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::array;

const int Max = 5;

int main(int argc, char *argv[])
{
    array<int, Max> golf;
    cout<<"Please enter your golf scores.\n";
    cout<<"You must enter "<<Max<<" rounds.\n";
    int i;
    for(i=0;i<Max;i++)
    {
        cout<<"round #"<<i+1<<": ";
        while(!(cin>>golf[i]))
        {
            cin.clear();
            while(cin.get()!='\n') continue;
            cout<<"Please enter a number: ";
        }
    }
    double total = 0.0;
    for(int j=0;j<i;j++)
    {
        total += golf[j];
    }
    if(i==0)
    {
        cout<<"No fish\n";
    }
    else
    {
        cout<<total / Max <<" = average score "<<Max<<" rounds\n";
    }
    cout<<"Done.\n";

    return 0;
}