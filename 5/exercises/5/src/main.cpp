#include <iostream>
#include <string>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::array;

int main(int argc, char *argv[])
{
    string month[]={"January", "February", "March", "April", "May", "June", "Jyly", "August", "September", "October", "November", "December"};
    array<int, 12> saleNum;
    int sum = 0;
    cout<<"请输入每月，《C++ For Fools》书籍销售数量：\n";
    for(int i=0;i<12;i++)
    {
        cout<<month[i]<<":";
        cin>>saleNum[i];
        sum += saleNum[i];
    }
    cout<<"该年份销售书籍总数量："<<sum<<endl;
    return 0;
}