#include<iostream>
using namespace std;
class sqr;
class rect
{
    int x,y;
    public:
    rect(int a,int b)
    {
        x=a;
        y=b;
    }
    int area()
    {
        return x*y;
    }
    friend void display(rect r, sqr s);
};
class sqr
{
    int side;
    public:
    sqr(int c)
    {
        side=c;
    }
    int area()
    {
        return side+side;
    }
    friend void display(rect r, sqr s);
};
void display(rect r,sqr s)
{
    cout<<"Area of rect="<<r.area()<<endl;
    cout<<"Area of square="<<s.area()<<endl;
}
int main()
{
    rect r1(10,5);
    sqr s1(10);
    display(r1,s1);
    return 0;
}