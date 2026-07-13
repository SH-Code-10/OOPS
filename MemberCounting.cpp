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
        pcount++;
    }
    Member(){
        
        cout<<pcount<<endl;
    }

};

int Member::pcount=0;
  //declaring the pcount outside the class using scope resolution operator;
int main(){
    
    
    // int n;
    // cout<<"Enter the members:\n";
    // cin>>n;
    // Member m[n]={
    //     Member("shishir",10000),
    //     Member("shrestha",1000)
    // };
    Member("shishir",100000);
    Member("stha",22222);
    Member m;
    
}