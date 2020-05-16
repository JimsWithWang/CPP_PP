#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    int ch;
    int count=0;
    
    while ((ch=cin.get())!=EOF)
    {
        cout.put(char(ch));
        count++;
    } 
    cout<<endl<<count<<" characters read\n";

    return 0;
}