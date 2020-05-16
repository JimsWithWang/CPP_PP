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
    CandyBar snack[3]={
        {"Mocha Munch", 2.3, 350},
        {"Mocha", 12.3, 1350},
        {"Munch", 2.13, 315}};
    cout<<"CandyBar name:"<<snack->name<<endl;
    cout<<"CandyBar weight:"<<snack->weight<<endl;
    cout<<"CandyBar calora:"<<snack->calora<<endl;

    cout<<"CandyBar name:"<<snack[1].name<<endl;
    cout<<"CandyBar weight:"<<snack[1].weight<<endl;
    cout<<"CandyBar calora:"<<snack[1].calora<<endl;

    cout<<"CandyBar name:"<<snack[2].name<<endl;
    cout<<"CandyBar weight:"<<snack[2].weight<<endl;
    cout<<"CandyBar calora:"<<snack[2].calora<<endl;
    return 0;
}