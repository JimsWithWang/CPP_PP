#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;
    int higgens = 6;
    int *pt = &higgens;
    
    cout<<"Value of higgens = "<<higgens
        <<"; Address of higgens = "<<&higgens<<endl;
    cout<<"Value of *pt = "<<*pt
        <<"; Value of pt = "<<pt<<endl;
    
    return 0;
}