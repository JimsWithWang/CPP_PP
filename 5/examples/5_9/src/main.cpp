#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    cout<<"Enter a word: ";
    string word;
    cin>>word;

    char temp;
    int i,j;
    for(j=0,i=word.size()-1;j<i;--i,++j)
    {
        temp = word[i];
        word[i]=word[j];
        word[j]= temp;
    }
    cout<<word<<"\nDone.\n";

    return 0;
}