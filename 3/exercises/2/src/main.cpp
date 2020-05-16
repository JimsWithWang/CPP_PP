#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;
    const int h_trans = 12;
    const float hm_trans = 0.0254;
    const float w_trans = 2.2;
    float high, weight;
    cout<<"Enter the high of body:";
    cin>>high;
    cout<<"Enter the weight of body:";
    cin>>weight;
    cout<<"BMI:"<<(weight/w_trans)/(high*h_trans*hm_trans)<<endl;
    return 0;
}