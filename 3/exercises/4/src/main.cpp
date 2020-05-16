#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;
    int sum,sumd,d,sumh,h,summ,m,s;
    cout<<"Enter the number of seconds:";
    cin>>sum;
    s = sum%60;
    summ = sum/60;
    m = summ%60;
    sumh = summ/60;
    h = sumh%24;
    d = sumh/24;
    cout<<sum<<" seconds = "<<d<<" days, "<<h<<" hours, "<<m<<" minutes, "<<s<<" seconds"<<endl;
    return 0;
}