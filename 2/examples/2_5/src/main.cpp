#include <iostream>

void simon(int);

int main(int argc, char *argv[])
{
    using namespace std;
    simon(3);
    cout<<"Pick an integer:";
    int count;
    cin>>count;
    simon(count);
    cout<<"Done!"<<endl;
    return 0;
}

void simon(int n)
{
    using namespace std;
    cout<<"Simon syas touch your toes "<<n<<" times."<<endl;
}