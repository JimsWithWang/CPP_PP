#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;
    double length,useOil;
    cout<<"输入驱车里程（英里）:";
    cin>>length;
    cout<<"输入使用汽油量（加仑）:";
    cin>>useOil;
    cout<<"一加仑汽油行驶里程（英里）："<<useOil/length<<endl;
    return 0;
}