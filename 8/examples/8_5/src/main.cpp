#include <iostream>

using std::cout;
using std::endl;

double cube(double a);
double refcube(double &ra);

int main(int argc, char *argv[])
{
    double x = 3.0;

    cout<<cube(x);
    cout<<" = cube of "<<x<<endl;
    cout<<refcube(x);
    cout<<" = cube of "<<x<<endl;
    return 0;
}

double cube(double a)
{
    a *= a*a;
    return a;
}
double refcube(double &ra)
{
    ra *= ra*ra;
    return ra;
}