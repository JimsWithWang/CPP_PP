#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};

void rect_to_polar(const rect *pxy, polar *pad);
void show_polar(const polar *pad);

int main(int argc, char *argv[])
{
    rect rplace;
    polar pplace;

    cout<<"Enter the x and y values: ";
    while(cin>>rplace.x>>rplace.y)
    {
        rect_to_polar(&rplace,&pplace);
        show_polar(&pplace);
        cout<<"Next two numbers (q to quit): ";
    }
    cout<<"Done. \n";

    return 0;
}

void rect_to_polar(const rect *pxy, polar *pad)
{
    pad->distance = sqrt(pxy->x*pxy->x+pxy->y*pxy->y);
    pad->angle = atan2(pxy->y,pxy->x);
}

void show_polar(const polar *pad)
{
    const double Rad_to_deg = 57.29577951;

    cout<<"distance = "<<pad->distance;
    cout<<", angle = "<<pad->angle*Rad_to_deg;
    cout<<" degrees\n";
}