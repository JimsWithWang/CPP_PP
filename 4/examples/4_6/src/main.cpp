#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;
    cout<<"What year was your house build?\n";
    int year;
    (cin>>year).get();
    cout<<"What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout<<"Year built:"<<year<<endl;
    cout<<"Address:"<<address<<endl;
    cout<<"Done!\n";
    return 0;
}