#include<iostream>
using namespace std;
class Distance{
    private:
    int centimeter;
    int meter;
    public:
    Distance(){}
    Distance(int a,int b){
        centimeter=a;
        meter=b;
    }
    void display(Distance d1,Distance d2){
       centimeter=d1.centimeter+d2.centimeter;
       meter=d1.meter+d2.meter;
       cout<<meter<<"m"<<centimeter<<"cm";
    }
   
   


};
int main(){
    Distance d1(80,5);
    Distance d2(50,2);
    Distance d3;
    d3.display(d1,d2);
    
}