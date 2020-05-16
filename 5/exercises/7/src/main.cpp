#include <iostream>
#include <string>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::array;

struct car
{
    string company;
    //char company[30];
    int productYear;
};

int main(int argc, char *argv[])
{
    int num;
    cout<<"How many cars do you wish to catalog?";
    cin>>num;
    car *carStruct = new car[num];
    for(int i=0;i<num;i++)
    {
        cout<<"Car #"<<i+1<<":\n";
        cout<<"Please enter the make:";
        cin.ignore();
        getline(cin, carStruct[i].company);
        cout<<"Please enter the year made:";
        cin>>carStruct[i].productYear;
    }

    cout<<"Here is your collection:\n";
    for(int i=0;i<num;i++)
    {
        cout<<carStruct[i].productYear<<" "<<carStruct[i].company<<endl;
    }
    delete[] carStruct;
    // cout<<"输入一句话："<<endl;
    // string word;
    // int n;
    // getline(cin, word);
    // cout<<word<<endl;
    // cout<<"输入一个数字：";
    // cin>>n;
    // cout<<n<<endl;
    return 0;
}