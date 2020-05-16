#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    char ch;
    cin>>ch;
    while (ch!='@')
    {
        if(ch>='A'&&ch<='Z')
        {
            cout<<char(tolower(ch));
        }
        else if(ch>='a'&&ch<='z')
        {
            cout<<char(toupper(ch));
        }
        cin>>ch;
    } 
    

    return 0;
}