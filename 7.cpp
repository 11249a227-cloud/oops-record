#include<iostream>
using namespace std;
class Time
{
    private:
    int Lams, minutes, seconds;
    public:
    void input(inth, intm,ints)
    {
        hours=h;
        minutes=m;
        seconds=s;
    }
    void display()
    {
        cout<<hours<<"h:"<<mintes<<"m:"<<seconds<<"s:".endl;
    }
    void add(Time t1, Time t2)
    {
        seconds =t1.seconds+t2.seconds;
        mintes=t1.minutes+t2.minutes+seconds/60;
        hours=t1.hours+t2.hours
        seconds=seconds%60;
        minutes=minutes%60;
    }    
};
int main()
{
    Time t1,t2,t3;
    t1.input(2,45,50);
    t2.input(3,50,00);
    cout<<"First time:";
    t1.display();
    cout<<"second time:";
    t2.display();
    cout<,"sum of times:";
    t3.display();
    return 0;
}

