#include<iostream>
using namespace std;
class Add{
    private:
    int a;
    int b;
    public:
    Add(int a,int b){
        this->a=a;
        this->b=b;
    }

    Add operator+(Add &obj){
        return Add(this->a+obj.a,this->b+obj.b);  //It return value to object c and in object c there holds new value a and b obtained;
        //concept like recursion;
        
}
    void display(){
        cout<<"a-->"<<a<<" "<<"b-->"<<b;  //displaying a and b value;
    }
  
};
int  main(){
    Add a1(1,2);
    Add b1(5,6);
    Add c=a1+b1; //a1.operator+(b1);
    c.display();
    
}