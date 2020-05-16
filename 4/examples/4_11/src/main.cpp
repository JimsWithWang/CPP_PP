#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, char *argv[])
{
    using namespace std;
    inflatable guest = 
    {
        "Glorious Gloria",
        1.88,
        29.99
    };

    inflatable pa1 =
    {
        "Audacius Arthur",
        3.12,
        32.99
    };
    cout<<"Expand your guest list with "<<guest.name;
    cout<<" and "<<pa1.name<<"!\n";
    cout<<"Yout can have both for $";
    cout<<guest.price+pa1.price<<".\n";
    
    return 0;
}