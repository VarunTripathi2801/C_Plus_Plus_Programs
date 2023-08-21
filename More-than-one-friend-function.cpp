#include<iostream>
using namespace std;
class rect
{
    friend int area(const rect&a);
    int x,y;
    public:
    rect(int l,int w)
    {
        x=l;
        y=w;
    }
    friend double cost(const rect&a,double);
};
int area(const rect&b)
{
    return b.x*b.y;

}
double cost(const rect&b,double s)
{
    return b.x*b.y*s;
}
int main()
{
    double a=4.5,b=5.2;
    rect r1(10,5),r2(20,5);
    cout<<"Area of r1="<<area(r1)<<"\n";
    cout<<"Area of r2="<<area(r2)<<"\n";
    cout<<"cost="<<cost(r1,a)<<"\n";
    cout<<"cost="<<cost(r2,b)<<"\n";
}