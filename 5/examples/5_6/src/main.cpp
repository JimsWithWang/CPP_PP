#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main(int argc, char *argv[])
{
    cout<<"Enter a word:";
    string word;
    cin>>word;

    for(int i=word.size()-1;i>=0;i--)
    {
        cout<<word[i];
    }
    cout<<"\nBye.\n";
    return 0;
}