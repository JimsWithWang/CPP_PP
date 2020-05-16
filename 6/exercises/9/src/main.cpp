#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;

struct Donator
{
    string name;
    double money;
};

int main(int argc, char *argv[])
{
    string filename;
    cout<<"Enter the name of file:";
    cin>>filename;
    ifstream infile;
    infile.open(filename);
    if(!infile.is_open())
    {
        cout<<"Failed to open the file!\n";
        exit(EXIT_FAILURE);
    }
    int count;
    infile>>count;
    //infile.ignore();
    //cout<<count<<endl;
    Donator *peopleList = new Donator[count];
    string name;
    for(int i=0;i<count;i++)
    {
        infile.ignore();
        getline(infile,peopleList[i].name);
        infile>>peopleList[i].money;
        //cout<<peopleList[i].name<<":"<<peopleList[i].money<<endl;
    }
    infile.close();
    cout<<"These are Grand Patrons:"<<endl;
    for(int i=0;i<count;i++)
    {
        if(peopleList[i].money>10000)
        {
            cout<<peopleList[i].name<<":"<<peopleList[i].money<<endl;
        }
    }
    cout<<"These are Patrons:"<<endl;
    for(int i=0;i<count;i++)
    {
        if(peopleList[i].money<=10000)
        {
            cout<<peopleList[i].name<<":"<<peopleList[i].money<<endl;
        }
    }
    delete []peopleList;
    
    return 0;
}