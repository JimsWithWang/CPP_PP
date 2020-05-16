#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void simple();

int main(int argc, char *argv[])
{
    cout<<"main() will call the simple() function:\n";
    simple();
    cout<<"main() is finished with the simple() function:\n";
    return 0;
}

void simple()
{
    cout<<"I'm but a simple function.\n";
}