#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int ArSize = 20;

int main(int argc, char *argv[])
{
    char ch;
    int count=0;
    cin.get(ch);
    while (!cin.fail())
    {
        cout<<ch;
        count++;
        cin.get(ch);
    } 
    cout<<endl<<count<<" characters read\n";

    return 0;
}