#include <iostream>

extern int tom;
static int dick = 10;
int harry = 200;

using std::cout;
using std::endl;

void remote_access()
{
    cout<<"remote_access() reports the following addresses:\n";
    cout<<&tom<<" = &tom, "<<&dick<<" = &dick, ";
    cout<<&harry<<" &harry\n";
}