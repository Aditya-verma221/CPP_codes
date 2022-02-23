#include<iostream>
using namespace std;

class measure{
    public:
    float height;
    float length;
    float width;

    void setInput(float a, float b,float c){
        height = a;
        length = b;
        width = c;
        }
    float area(){
        return length*width;
    }
    float volume(){
        return length*width*height;
    }
};


int main(){
    measure obj1;
    measure obj2;
    cout<< "Enter height, length and width for object 1 respectively: \n";
    cin>> obj1.height;
    cin>> obj1.length;
    cin>> obj1.width;
    obj1.setInput(obj1.height,obj1.length,obj1.width);
    cout<<"Height= "<<obj1.height<<",Length= "<<obj1.length<<", Width= "<<obj1.width<<endl;

    cout<< "Enter height, length and width for object 2 respectively: \n";
    cin>> obj2.height;
    cin>> obj2.length;
    cin>> obj2.width;
    obj2.setInput(obj2.height,obj2.length,obj2.width);
    cout<<"Height= "<<obj2.height<<",Length= "<<obj2.length<<", Width= "<<obj2.width<<endl;

    cout<<"For object 1 area and volume are= "<<obj1.area()<<" and "<<obj1.volume()<<" respectively\n";
    cout<<"For object 2 area and volume are= "<<obj2.area()<<" and "<<obj2.volume()<<" respectively\n";
return 0;
}