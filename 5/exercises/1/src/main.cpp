#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    using namespace std;
    int a,b,sum = 0;
    cout<<"Enter two number:";
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        sum+=i;
    }
    cout<<a<<" , "<<b<<" 之间所有数的和： "<<sum<<endl;

    return 0;
}