#include<iostream>
using namespace std;
class student
{
    private:
    int rollno,m1,m2,m3,total;
    char name[50];
    float avg;
    public:
    void getdetails()
    {
    cout<<"enter your roll no:";
    cin>>rollno;
    cout<<"enter your name:";
    cin>>name;
    cout<<"enter your m1:";
    cin>>m1;
    cout<<"enter your m2:";
    cin>>m2;
    cout<<"enter your m3:";
    cin>>m3;
    }


void calucate()
{
    total=m1+m2+m3;
    avg=total/3;
} 
void display()
{

    cout<<"roll no:"<<rollno<<endl;
    cout<<"nmae:"<<name<<endl;
    cout<<"mark1:"<<m1<<endl;
    cout<<"mark2:"<<m2<<endl;
    cout<<"mark3:"<<m3<<endl;
    cout<<"total:"<<total<<endl;
    cout<<":average:"<<avg<<endl;
}
};
int main()
{
    student s;
    s.getdetails();
    s.calucate();
    s.display();
    return 0;
}
