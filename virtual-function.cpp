#include<iostream>
using namespace std;
class B
{
    public:
    virtual void display()
    {
       cout<<"hello"<<endl;
    }
};
class D:public B
{
    public:
    void display()
    {
        cout<<"hello c++"<<endl;
    }
};
int main()
{
    B b; 
    D d;
    B *bptr=&b;
    bptr->display();
    bptr=&d;
    bptr->display();
    return 0;
}