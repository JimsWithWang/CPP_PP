#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;
    const float trans = 60.0;
    int d,f,s;
    cout<<"输入度:";
    cin>>d;
    cout<<"输入分:";
    cin>>f;
    cout<<"输入秒:";
    cin>>s;
    cout<<"纬度:"<<d+(f+s/trans)/trans<<endl;
    return 0;
}