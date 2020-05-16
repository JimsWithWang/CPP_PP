#include <iostream>
#include <array>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::array;

const int Seasons = 4;
const std::array<string, Seasons> Snames =
{
    "Spring", "Summer", "Fall", "Winter"
};

void fill(array<double, Seasons> *pa);
void show(array<double, Seasons> da);

int main(int argc, char *argv[])
{
    

    return 0;
}

void fill(array<double, Seasons> *pa)
{
    for(int i = 0;i<Seasons;i++)
    {
        cout<<"Enter "<<Snames[i]<<" expenses: ";
        cin>>(*pa)[i];
    }
}

void show(array<double, Seasons> da)
{
    double total = 0.0;
    cout<<"\n"
}