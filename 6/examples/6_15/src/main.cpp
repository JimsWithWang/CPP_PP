#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ofstream;
using std::fixed;
using std::ios_base;

int main(int argc, char *argv[])
{
    string automobile;
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("carinfo.txt");

    cout<<"Enter the make and model of automobile: ";
    getline(cin, automobile);
    cout<<"Enter the model year: ";
    cin>>year;
    cout<<"Enter the original asking price: ";
    cin>>a_price;
    d_price = 0.913 * a_price;

    cout<<fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout<<"Make and model: "<<automobile<<endl;
    cout<<"Year: "<<year<<endl;
    cout<<"Was asking $"<<a_price<<endl;
    cout<<"Now asking $"<<d_price<<endl;

    outFile<<fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile<<"Make and model: "<<automobile<<endl;
    outFile<<"Year: "<<year<<endl;
    outFile<<"Was asking $"<<a_price<<endl;
    outFile<<"Now asking $"<<d_price<<endl;

    outFile.close();

    return 0;
}