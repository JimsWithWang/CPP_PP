#include <iostream>
#include <climits>

int main(int argv, char *argc[])
{
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout<<"The one to the character code:"<<endl;
    ch +=1;
    i=ch;
    cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;

    cout<<"Displaying char ch using cout.put(ch):";
    cout.put(ch);

    cout.put('!');
    cout<<endl<<"Done"<<endl;

    return 0;
}