#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while(ch != '.')
    {
        if(ch == ' ')
            ++spaces;
        ++total;
        cin.get(ch);
    }
    cout<<spaces<<" Spaces, "<<total;
    cout<<" characters total in sentence\n";
    return 0;
}