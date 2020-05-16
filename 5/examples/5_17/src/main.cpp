#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int ArSize = 20;

int main(int argc, char *argv[])
{
    char ch;
    int count=0;
    cout<<"Enter characters;enter # to quit:\n";
    cin.get(ch);
    while (ch!='#')
    {
        cout<<ch;
        count++;
        cin.get(ch);
    } 
    cout<<endl<<count<<" characters read\n";

    return 0;
}