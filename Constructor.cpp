#include<iostream>
using namespace std;
class Demo{
    private:
    string name;
    int rank;
    int roll;

    public:

    //constructor is a function which automatically call itself when object is declared
    //default constructor :
      Demo(){
        cout<<"I am constructor"<<endl;
    }
    //Parameterized constuctor:
    Demo(string name,int rank){
        this->name=name;
        this->rank=rank;
        cout<<name<<" "<<rank<<endl;

    }
    //the upper both demo constructor having no parameter and having 2 parameter so they are constructor overloading;
    //inline constructor:
    inline Demo(string a,int b,int c): name(a),rank(b),roll(c){
        cout<<name<<" "<<rank<<" "<<roll<<endl;

    }
    //copy constructor:
    Demo(Demo &b){
        name=b.name;
        rank=b.rank;
        
        cout<<name<<" "<<rank<<endl;
    }


};
int main(){
    Demo obj1; //calling default constructor;
    Demo obj2("shishir",1); //calling parameterized constructor
    Demo obj3("shishir",1,41);
    Demo obj4(obj3);


}