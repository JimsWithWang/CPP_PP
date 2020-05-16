#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Donator
{
    string name;
    double money;
};

const int ArcSize = 5;

int main(int argc, char *argv[])
{
    Donator *list = new Donator[ArcSize];
    for(int i=0;i<ArcSize;i++)
    {
        cout<<"Enter the name of donate: ";
        cin>>(list+i)->name;
        cout<<"Enter the money of donate: ";
        cin>>(list+i)->money;
    }
    cout<<"These are Grand Patrons:"<<endl;
    for(int i=0;i<ArcSize;i++)
    {
        if((list+i)->money>10000)
        {
            cout<<(list+i)->name<<":"<<(list+i)->money<<endl;
        }
    }
    cout<<"These are Patrons:"<<endl;
    for(int i=0;i<ArcSize;i++)
    {
        if((list+i)->money<=10000)
        {
            cout<<(list+i)->name<<":"<<(list+i)->money<<endl;
        }
    }
    delete []list;
    
    return 0;
}