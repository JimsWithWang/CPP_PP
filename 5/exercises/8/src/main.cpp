#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    cout<<"Enter words (to stop, type the word done):\n";
    char word[30];
    int countNum = 0;
    cin>>word;
    while(strcmp(word,"done"))
    {
        countNum++;
        cin>>word;
    }
    cout<<"You entered a total of "<<countNum<<" words."<<endl;
    return 0;
}