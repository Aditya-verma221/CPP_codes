#include<iostream>
using namespace std;

class complex{
    public:
    int  real=0,img=0;
    friend class complex2;

    complex(int x,int y){
        real = x;
        img = y;
    }
    void display(){
        cout<<"real: "<<real<<" imaginary: "<<img<<endl;
    }
    complex operator + (complex obj){
        complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }
    
};
class complex2{
        public:
    int  real=0,img=0;    
    complex operator - (complex obj){
        complex temp;
        temp.real = real - obj.real;
        temp.img = img - obj.img;
        return temp;
    }
};
int main()
{
    complex c1(9,9), c2(7,8);
    c1.display();
    c2.display();
    complex c3;
    c3 = c2 - c1;
    c3.display();

    return 0;
}