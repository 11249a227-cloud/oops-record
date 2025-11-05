#include<iostream>
using namespace std;
class Demo
{
    private:
    int number;
    public:
    Demo (int n)
    {
        number= n;
        cout<<"Constructor called number="<<number<<endl;
    }
    ~Demo(){
        cout<<"Destructor called.number="<<number<<endl;
    }
    void display(){
        cout<<"value of number is:"<<number<<endl;
    }
};
int main(){
    cout<<"Creating first object"<<endl;
    Demo obj1(10);
    cout<<"Creating second object"<<endl;
    Demo obj2(20);
    cout<<"Displaying values"<<endl;
    obj1.display();
    obj2.display();
    cout<<"Existing main"<<endl;
    return 0;
}