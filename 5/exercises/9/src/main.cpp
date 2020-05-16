#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    cout<<"Enter words (to stop, type the word done):\n";
    string word;
    int countNum = 0;
    cin>>word;
    while(word!="done")
    {
        countNum++;
        cin>>word;
    }
    cout<<"You entered a total of "<<countNum<<" words."<<endl;
    return 0;
}