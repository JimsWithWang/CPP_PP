#include <iostream>
#include <string>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::array;

struct bop
{
    string fullname;
    string title;
    string bopname;
    int preference;
};

const int ArSize = 5;

void showMenu();
void showName(char, bop*);
void showArrName(char, array<bop, ArSize>);

int main(int argc, char *argv[])
{
    array<bop, ArSize> bopArray = 
    {
        "Wimp Macho", "teacher", "TT", 0,
        "Raki Rhodes", "Junior Programmer", "TT", 1,
        "Celia Laiter", "teacher", "MIPS", 2,
        "Hoppy Hipman", "Analyst Trainee", "TT", 1,
        "Pat Hand", "teacher", "Loop", 2
    };

    char ch;
    cout<<"Enter your choice:";
    while(cin>>ch)
    {
        if(ch == 'a'||ch=='b'||ch=='c'||ch=='d')
        {
            switch (ch)
            {
                case 'a':
                {
                    showArrName('a',bopArray);
                    break;
                }
                case 'b':
                {
                    showArrName('b',bopArray);
                    break;
                }
                case 'c':
                {
                    showArrName('c',bopArray);
                    break;
                }
                case 'd':
                {
                    showArrName('d',bopArray);
                    break;
                }
            }
        }
        else if(ch == 'q')
        {
            break;
        }
        cout<<"Enter your choice:";
    }

    return 0;
}

void showMenu()
{
    cout<<"Benevolent Order of Programmers Report\n"
        <<"a. display by name       b. display by title\n"
        <<"c. display by bopname    d. display by preference\n"
        <<"q. quit\n";
}

void showName(char ch, bop* t)
{
    if(ch=='a')
    {
        cout<<t->fullname<<endl;
    }
    else if(ch=='b')
    {
        cout<<t->title<<endl;
    }
    else if(ch=='c')
    {
        cout<<t->bopname<<endl;
    }
    else if(ch=='d')
    {
        if(t->preference==0)
        {
            showName('a',t);
        }
        else if(t->preference==1)
        {
            showName('b',t);
        }
        else
        {
            showName('c',t);
        }
    }
}

void showArrName(char ch, array<bop, ArSize> bopArray)
{
    for(int i=0;i<ArSize;i++)
    {
        showName(ch,&bopArray[i]);
    }
}