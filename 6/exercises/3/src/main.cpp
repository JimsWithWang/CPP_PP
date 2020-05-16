#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void showMenu();

int main(int argc, char *argv[])
{
    char ch;
    showMenu();
    while(cin>>ch)
    {
        if(ch == 'c'||ch == 'p'||ch == 't'||ch == 'g')
        {
            switch(ch)
            {
                case 'c':cout<<"A maple is a carnivore.\n";break;
                case 'p':cout<<"A maple is a pianist.\n";break;
                case 't':cout<<"A maple is a tree.\n";break;
                case 'g':cout<<"A maple is a game.\n";break;
                default:break;
            }
            break;
        }
        else
        {
            cout<<"Please enter a c, p, t, or g:";
        }
    }
    return 0;
}

void showMenu()
{
    cout<<"Please enter one of the following choices: \n"
        <<"c) carnivore         p) pianist\n"
        <<"t) tree              g) game\n";
}