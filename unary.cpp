#include<iostream>
using namespace std;
class space{
    int x,y,z;
    public:
    space(){
        x=y=z=0;
    }
    space(int a, int b, int c){
            x=a; y=b; z=c;
    }
    void display(){
        cout <<"x= "<<x<<" y= "<<y<<" z= "<<z<<endl;
    }
    void operator ++();
    void operator ++(int);
};

void space::operator++(){
    //x--; y--; z--;
    x++; y++; z++;
}
void space::operator++(int f){
    ++f;
    
}
int main(){
    space s1(5,4,3);
    s1.display();
    ++s1;
    s1.display();

    return 0;
}