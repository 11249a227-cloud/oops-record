#include<iostream>
using namespace std;
class book
{
    private:
    char ISBNO[50],bookname[50],author[50];
    int pages,accno;
    float price;
    public:
    void getdetails()
{
    cout<<"Enter ISBNO";
    cin>> ISBNO;
    cout<<"Enter bookname ";
    cin>>bookname;
    cout<<"Enter author ";
    cin>> author;
    cout<<"Enter pages ";
    cin>>pages;
    cout<<"Enter accno";
    cin>> accno;
    cout<<"Enter price: ";
    cin>>price;
}
void display()
{
    cout<<"ISBNO: "<<ISBNO;
    cout<<"bookname: "<<bookname;
    cout<<"author: "<<author;
    cout<<"pages: "<<pages;
    cout<<"accno: "<<accno;
    cout<<"prices:"<<price;
}
int main()
{
    book b;
    b.display();
    b.getdetails();
    return 0;
}
};