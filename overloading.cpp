#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    void show()
    {
        cout<<"Enter 2 numbers:"<<endl;
        cin>>a>>b;
        cout<<(a+b)<<endl;
    }
    void show(int a,int b)
    {
        cout<<(a*b)<<endl;
    }
    void show(char a,float b)
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }

};
int main()
{
    A obj;
    obj.show();
    obj.show(10,20);
    obj.show('B',2.46);
}