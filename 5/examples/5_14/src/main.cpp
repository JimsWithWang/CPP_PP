#include <iostream>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

const int ArSize = 20;

int main(int argc, char *argv[])
{
    cout<<"Enter the delay time, in seconds: ";
    float secs;
    cin>>secs;
    clock_t delay = secs*CLOCKS_PER_SEC;
    cout<<"starting\a\n";
    clock_t start = clock();
    while(clock()-start<delay);
    cout<<"done \a\n";

    return 0;
}