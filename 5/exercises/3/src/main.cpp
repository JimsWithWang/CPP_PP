#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    int n,sum=0;
    cout<<"请输入一个整数值（当输入0时，程序结束）：";
    cin>>n;
    while (n!=0)
    {
        sum+=n;
        cout<<"输入值："<<n<<",当前输入累计和："<<sum<<endl;
        cout<<"请输入一个整数值（当输入0时，程序结束）：";
        cin>>n;
    }
    
    return 0;
}