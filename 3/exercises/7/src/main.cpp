#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;
    double useOil;
    cout<<"每100公里消耗的汽油量（升）:";
    cin>>useOil;
    cout<<"一加仑汽油行驶里程（英里）："<<62.14/(useOil/3.875)<<endl;
    return 0;
}