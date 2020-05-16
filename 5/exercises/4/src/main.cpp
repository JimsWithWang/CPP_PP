#include <iostream>

using std::cout;
using std::endl;

const double beginMoney = 100;

int main(int argc, char *argv[])
{
    double daphneMoney,cleoMoney;
    daphneMoney = cleoMoney = beginMoney;
    int year=0;
    while(cleoMoney <= daphneMoney)
    {
        daphneMoney += (beginMoney*0.1);
        cleoMoney *= 1.05;
        year++;
        cout<<"年份："<<year<<" Cleo投资价值:"<<cleoMoney<<" Daphne投资价值:"<<daphneMoney<<endl;
    }
    cout<<"\n当第"<<year<<"年时，Cleo的投资价值超过Daphne的投资价值\n";
    cout<<"此时Cleo投资价值为"<<cleoMoney<<",Daphne的投资价值为"<<daphneMoney<<endl;
    return 0;
}