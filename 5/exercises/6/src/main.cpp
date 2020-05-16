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
    array<array<int, 12>,3> saleNum;
    int sum = 0;
    array<int, 3> sumYear;
    for(int i=0;i<3;i++)
    {
        cout<<"请输入第"<<(i+1)<<"年每月《C++ For Fools》书籍销售数量：\n";
        for(int j=0;j<12;j++)
        {
            cout<<month[j]<<":";
            cin>>saleNum[i][j];
            sumYear[i]+=saleNum[i][j];
            sum += saleNum[i][j];
        }
        cout<<"该年份销售书籍总数量："<<sumYear[i]<<endl;
    }
    cout<<"三年销售书籍总数量："<<sum<<endl;
    
    return 0;
}