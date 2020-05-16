#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    string line;
    int spaces = 0;

    cout<<"Enter a line of text:\n";
    getline(cin, line);
    cout<<"Complete line:\n"<<line<<endl;
    cout<<"Line through first period:\n";
    for(int i=0;i<line.size();i++)
    {
        cout<<line[i];
        if(line[i]=='.') break;
        if(line[i]!=' ') continue;
        spaces++;
    }
    cout<<endl<<spaces<<" spaces\n";
    cout<<"Done.\n";

    return 0;
}