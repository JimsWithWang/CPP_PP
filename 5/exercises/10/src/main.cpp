#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n-(i+1);j>=0;j--)
            cout<<". ";
        for(int k=0;k<=i;k++)
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}