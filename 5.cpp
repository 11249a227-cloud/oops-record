#include<iostream>
using namespace std;
class Demo
{ 
   private:
   int number;
   public:
   Demo (int n){
    number=n;
    cout<<"Constructer called.Number="<<number<<endl;
   } 
   ~Demo(){
    cout<<"Destructor called.Number="<<number<<endl;
   }
   void display(){
    cout<<"value of number is :"<<number<<endl;
   }
};
int main()
{
    cout<<"Creating first objest"<<endl;
    Demo objest1(10);
    cout<<"Creating second object"<<endl;
    Demo object2(20);
    cout<<"Displaying values"<<endl;
    objest1.display();
    object2.display();
    cout<<"Existing main"<<endl;
    return 0;
}