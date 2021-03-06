#include <iostream>

using std::cin;
using std::cout;
using std::endl;

inline double square(double x) {return x*x;}

int main(int argc, char *argv[])
{
    double a,b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5+7.5);
    cout<<"a = "<<a<<", b = "<<b<<endl;
    cout<<"c = "<<c;
    cout<<", c squared = "<<square(c++)<<endl;
    cout<<"Now c = "<<c<<endl;
    return 0;
}