#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

int main(int argc, char *argv[])
{
    string filename;
    cout<<"Enter the name of file:";
    cin>>filename;
    ifstream outFile;
    outFile.open(filename);
    char ch;
    int count = 0;
    while(outFile>>ch)
    {
        cout<<ch;
        count++;
    }
    cout<<"\nThe number of alpha:"<<count<<endl;
    outFile.close();
    return 0;
}