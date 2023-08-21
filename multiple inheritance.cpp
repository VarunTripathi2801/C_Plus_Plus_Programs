#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    void get()
    {
        cout<<"Enter numbers"<<endl;
        cin>>a>>b;
    }
    void put()
    {
        cout<<"Addition of two numbers is = "<<(a+b)<<endl;
    }
    
};
class B
{
    string x;
    public:
    void getdata()
    {
        cout<<"Enter string"<<endl;
        cin>>x;
        cout<<"Entered String is:"<<x<<endl;
    }
};
class C:A,B
{
    int x,y,z;
    public:
    void getthis()
    {
        cout<<"Enter number to divide"<<endl;
        cin>>x>>y;
        z=x/y;
        cout<<"Division of two numbers = "<<z<<endl;
        A::get();
        A::put();
        B::getdata();
    }
};
int main()
{
    C obj;
    obj.getthis();
}