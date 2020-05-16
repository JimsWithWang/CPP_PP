#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void cheers(int);
double cube(double x);

int main(int argc, char *argv[])
{
    cheers(5);
    cout<<"Give me a number:";
    double side;
    cin>>side;
    double volume = cube(side);
    cout<<"A "<<side<<" foot cube has a volume of ";
    cout<<volume<<" vubic feet.\n";
    cheers(cube(2));
    return 0;
}

void cheers(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Cheers! ";
    }
    cout<<endl;
}

double cube(double x)
{
    return x*x*x;
}