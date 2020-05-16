#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    cout<<"The Amazing Accounto will sum and average ";
    cout<<"five numbers for you.\n";
    cout<<"Please enter five valuse:\n";
    double number;
    double sum = 0.0;
    for(int i = 1;i<=5;i++)
    {
        cout<<"Value "<<i<<": ";
        cin>>number;
        sum+=number;
    }
    cout<<"Five exquisite choice indeed! ";
    cout<<"They sum to "<<sum<<endl;
    cout<<"and average to "<<sum/5<<endl;
    cout<<"The Amazing Accounto bids you adieu!\n";

    return 0;
}