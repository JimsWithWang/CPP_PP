#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string name;
    double weight;
    int calora;
};

int main(int argc, char *argv[])
{
    CandyBar snack{"Mocha Munch", 2.3, 350};
    cout<<"CandyBar name:"<<snack.name<<endl;
    cout<<"CandyBar weight:"<<snack.weight<<endl;
    cout<<"CandyBar calora:"<<snack.calora<<endl;
    return 0;
}