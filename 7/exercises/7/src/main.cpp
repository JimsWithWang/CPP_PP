#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    string word;
    int an = 0, bn = 0, others = 0;
    cout<<"Enter words (q to quit):\n";
    while(cin>>word)
    {
        if(word == "q")
        {
            break;
        }
        if(isalpha(word[0]))
        {
            if((word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
                ||(word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U'))
            {
                ++an;
            }
            else
            {
                ++bn;
            }
            
        }
        else
        {
            ++others;
        }
    }
    cout<<an<<" words beginning with vowels\n";
    cout<<bn<<" words beginning with consonants\n";
    cout<<others<<" others\n";
    return 0;
}