#include <iostream>
#include <string>

using namespace std;

struct Piza
{
    string company;
    double R;
    double weight;
};

int main(int argc, char *argv[])
{
    Piza piza;
    cout<<"Enter the company name:";
    getline(cin,piza.company);
    cout<<"Enter the piza's R:";
    cin>>piza.R;
    cout<<"Enter the weight of piza:";
    cin>>piza.weight;

    cout<<"the name of company:"<<piza.company;
    cout<<"\nthe R of piza:"<<piza.R;
    cout<<"\nthe weight of piza:"<<piza.weight<<endl;
    return 0;
}