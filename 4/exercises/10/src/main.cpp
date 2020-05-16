#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::array;

int main(int argc, char *argv[])
{
    array<double, 3>time;
    cout<<"Enter the first time of run:";
    cin>>time[0];
    cout<<"Enter the second time of run:";
    cin>>time[1];
    cout<<"Enter the third time of run:";
    cin>>time[2];

    cout<<"The numbar of run:"<<time.size();
    cout<<"\nthe gard of run:"<<(time[0]+time[1]+time[2])/3<<endl;
    return 0;
}