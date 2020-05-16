#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    using namespace std;
    const int Size = 20;
    char firstName[Size], lastName[Size];
    cout<<"Enter your first name:";
    cin.get(firstName, Size).get();
    cout<<"Enter your last name:";
    cin.getline(lastName, Size);
    cout<<"Here's the information in a single string:"<<lastName<<", "<<firstName<<endl;
    return 0;
}