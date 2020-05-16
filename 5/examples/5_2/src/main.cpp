#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;
    cout<<"Enter the starting countdown value:";
    int limit;
    cin>>limit;
    int i;
    for(i=0;i<limit;i++)
    {
        cout<<"i = "<<i<<"\n";
    }
    cout<<"Donw now that i = "<<i<<endl;

    return 0;
}