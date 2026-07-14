#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    virtual void speak(){   //run in runtime if we dont declared virtual infront then it also runs in compile time 
        cout<<"i am person"<<endl;
    }
};
class animal :public person{  //inheritate the person class to animal person class-->parent class animal class--> derived class
    private:
    string name;
    public:
    void speak(){  //runs in compiletime
        cout<<"i am animal"<<endl;
    }
};
int main(){
   
    
    person *p;  //runs in compiletime
    p=new animal();  //runs in runtime
    p->speak();  //if virtual not written in parent class then here print the parent class speak();
    //but in here code animal class speak print;
   
}