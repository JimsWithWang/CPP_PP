#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    double money,tax;
    cout<<"Enter the tvarps of man: ";
    while(cin>>money)
    {
        if(money<=0) break;
        else if(money<=5000) 
        {
            tax = 0.0;
        }
        else if(money>5000&&money<=15000)
        {
            tax = (money-5000)*0.10;
        }
        else if(money>15000&&money<=35000)
        {
            tax = 10000*0.10+(money-15000)*0.15;
        }
        else
        {
            tax = 10000*0.10+20000*0.15+(money-35000)*0.20;
        }
        cout<<money<<" tvarps need "<<tax<<" tax!\n";
        cout<<"Enter the tvarps of man: ";
    }
    return 0;
}