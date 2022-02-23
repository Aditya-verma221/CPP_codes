#include<iostream>
using namespace std;

float volume(float l=5,float w=6,float h=10){
        return l*w*h;
    }
int main()
{
    cout<<volume()<<endl;
    cout<<volume(7)<<endl;
    cout<<volume(7,2)<<endl;
    cout<<volume(7,2,2)<<endl;
    return 0;
}