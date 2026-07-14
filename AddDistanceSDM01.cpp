#include<iostream>
using namespace std;
class Distance{
    private:
    int centimeter;
    int meter;
    public:
    Distance(int centimeter,int meter){
        this->centimeter=centimeter;
        this->meter=meter;
    }
    Distance operator+(Distance &obj){
        return Distance(this->centimeter+obj.centimeter,this->meter+obj.meter);
    }
    void display(){
        cout<<meter<<"m"<<centimeter<<"cm";
    }


};
int main(){
    Distance d1(80,5);
    Distance d2(50,2);
    Distance d3=d1+d2;
    d3.display();
    
}