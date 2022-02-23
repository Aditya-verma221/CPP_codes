#include<iostream>
using namespace std;

class Calci{
    public:
    int input1;
    int input2;

    void setInput(int a, int b){
        input1 = a;
    input2 = b;}
    int add(){
        return input1+input2;
    }
    int sub(){
        return input1-input2;
    }
    int multi(){
        return input1*input2;
    }
    float div(){
        return input1 / input2;
    }
    int power(){
        int result=1;
        for(int i=0;i<input2;i++){
            result = input1*result;
        }
        return result;
    }
};

int main(){
    Calci obj1;
    int op;
    cout<< "Enter inputs: \n";
    cin>>obj1.input1;
    cin>>obj1.input2;
    obj1.setInput(obj1.input1,obj1.input2);
    cout<< "The inputs: "<< obj1.input1<<", "<<obj1.input2<< endl;
    //cout << obj1.add();
    cout<<"Press 1 for addition,2 for subtraction, 3 for multiplication, 4 for division and 5 for power(inp1=base,inp2=expo)\n";
    cin>>op;
    while(op>0 && op<6){
        
        switch (op)
        {
        case 1:
           cout<< obj1.add();
            break;
        case 2:
            cout<< obj1.sub();
            break;
        case 3:
            cout<< obj1.multi();
            break;
        case 4:
            cout<< obj1.div();
            break;
        case 5:
            cout<< obj1.power();
            break;
    }
    cout<< "\nEnter choice again or press 0 to exit: ";
    cin>>op;}
    
    return 0;
}