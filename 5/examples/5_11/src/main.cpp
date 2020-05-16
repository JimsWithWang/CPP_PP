#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    char word[5] = "?ate";

    for(char ch = 'a';strcmp(word, "mate");ch++)
    {
        cout<<word<<endl;
        word[0]=ch;
    }
    cout<<"After loop ends, word is "<<word<<endl;

    return 0;
}