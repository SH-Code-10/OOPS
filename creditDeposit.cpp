#include<iostream>
using namespace std;
class Customer{
    private:
    string name;
    int balance;
    int deposit;
    int credit;
    public:
    Customer(string name,int balance,int deposit=0,int credit=0){
        this->name=name;
        this->balance=balance;
        this->deposit=deposit;
        this->credit=credit;

    }
    void pamount(){
        cout<<"your balance is "<<balance<<endl;
    }
    void damount(){
        if(deposit>0){
            balance+=deposit;
            cout<<"Your current balance is "<<balance<<endl;
        }
        else{
            cout<<"Deposit failed";
        }
}   void camount(){
        if(credit>0){
            balance-=credit;
            cout<<"Your current balance is "<<balance<<endl;
        }
        else{
            cout<<"Credit failed";
        }
 }
    

};
int main(){ int click;
    string lname;
    int num=1;
    string name;int balance;int baldepo;int choice;int balcred;
    while(num){
    cout<<"Enter your name:"<<endl;
    cin>>name>>lname;
    cout<<"Enter your balance:"<<endl;
    cin>>balance;
    
    cout<<"Enter 1 for credit (withdraw) \nEnter 2 for deposit"<<endl;
    cin>>choice;

    switch (choice){
    case 1:{ cout<<"Enter the balance to deposit"<<endl;
    
    cin>>balcred;
    Customer c(name,balance,0,balcred);
    c.pamount();
    c.camount();
    break;}
    case 2:{
    cout<<"Enter the balance to deposit"<<endl;
    
    cin>>baldepo;
    Customer c(name,balance,baldepo);
    c.pamount();
    c.damount();
    break;}
    default:{
    cout<<"Error"<<endl;
    break;}

}
cout<<"Continue-1\nExit-2"<<endl;
cin>>click;
if(click==1){
    num=1;
}
if(click==2){
    num=0;
    cout<<"\nThank you for visiting"<<endl;
}



    
    
    


    }
}