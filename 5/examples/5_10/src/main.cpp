#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::array;

int main(int argc, char *argv[])
{
    array<int, 10> quizscores = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    cout<<"Doing it right:\n";
    int i;
    for(i = 0;quizscores[i] == 20;i++)
    {
        cout<<"quiz "<<i<<" is a 20\n";
    }
    cout<<"Doing it dangerously wrong:\n";
    for(i=0;quizscores[i]=20,i<quizscores.size();i++)
    {
        cout<<"quiz "<<i<<" is a 20\n";
    }
    cout<<endl;

    return 0;
}