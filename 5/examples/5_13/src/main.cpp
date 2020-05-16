#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::array;

const int ArSize = 20;

int main(int argc, char *argv[])
{
    char name[ArSize];
    cout<<"Your first name, Please: ";
    cin>>name;
    cout<<"Here is your name, verticalized and ASCIIized:\n";
    int i=0;
    while(name[i] != '\0')
    {
        cout<<name[i]<<": "<<int(name[i])<<endl;
        i++;
    }

    return 0;
}