#include <iostream>
#include <climits>

#define ZERO 0

int main(int argc, char *argv[])
{
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposites."<<endl
        <<"Add $1 to each account."<<endl<<"Now ";
    sam += 1;
    sue += 1;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposites.\nPoor Sam!"<<endl;
    sam = ZERO;
    sue = ZERO;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposites."<<endl
        <<"Take $1 from each account."<<endl<<"Now ";
    sam -=1;
    sue -=1;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposites.\nLucky Sue!"<<endl;
    return 0;
}