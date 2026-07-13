#include<iostream>
using namespace std;
class Member{
    private:
    string name;
    int balance;
    static int pcount;  //only declared only one time;
    public:
    Member(string name,int balance){
        this->name=name;
        this->balance=balance;
        pcount++;  //increment;
    }
    Member(){  ///we can also do using function 
        
        cout<<pcount<<endl;  //displaying pcount;
    }

};

int Member::pcount=0;
  //declaring the pcount outside the class using scope resolution operator;
int main(){
    
    

    Member("shishir",100000);
    Member("stha",22222);
    Member m; //making object which automatically calls the default constructor 
    //we must declare it on last because first all the member must be counted if we declared it in top then it always shows 0;
    
}
