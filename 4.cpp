#include<iostream>
using namespace std;
class Ebill
{
    private:
    int customerid,units;
    float amount;
    char name[50];
    public:
    void getdetails();
    void computebill();
    void printbill();
};
void Ebill::getdetails()
{
    cout<<"Enter customerid:";
    cin>>customerid;
    cout<<"Enter customer name:";
    cin>>name;
    cout<<"Enter units consumed:";
    cin>>units;
}
void Ebill::computebill() 
{
if(units<=100){
    amount=0;
}
else if(units<=200){
    amount=(units-100)*2.25;  
}
else if (units<-400){
    amount=(100*2.25)+(units-200)*4.50;
}
else if(units<=600){
    amount=(100*2.25)+(200*4.50)+(units-400)*6.00;
}
else{
    amount=(100*2.25)+(200*4.50)+(units-400)*6.00+(units-600)*9.00;
}
}
void Ebill::printbill()
{
    cout<<"/n----Electricitybill---/n";
    cout<<"customerid:"<<customerid<<endl;
    cout<<"units:"<<units<<endl;
    cout<<"amount:"<<amount<<endl;
}
int main(){
    Ebill e;
    e.getdetails();
    e.computebill();
    e.printbill();
    return 0;
}