#include <iostream>

using std::cin;
using std::endl;
using std::cout;

void oil(int x);

int main(int argc, char *argv[])
{
    int texas = 31;
    int year = 2011;
    cout<<"In main(), texas = " << texas <<", &texas = ";
    cout<<&texas <<endl;
    cout<<"In main(), year = "<<year<<", &year = ";
    cout<<&year<<endl;
    oil(texas);
    cout<<"In main(), texas = " << texas <<", &texas = ";
    cout<<&texas <<endl;
    cout<<"In main(), year = "<<year<<", &year = ";
    cout<<&year<<endl;
    return 0;
}

void oil(int x)
{
    int texas = 5;

    cout<<"In oil(), texas = " << texas <<", &texas = ";
    cout<<&texas <<endl;
    cout<<"In oil(), x = " << x <<", &x = ";
    cout<<&x<<endl;
    {
        int texas = 113;
        cout<<"In block, texas = " << texas <<", &texas = ";
        cout<<&texas <<endl;
        cout<<"In block, x = " << x <<", &x = ";
    }
    cout<<"Post-block texas = "<<texas;
    cout<<", &texas = "<<&texas<<endl;
}