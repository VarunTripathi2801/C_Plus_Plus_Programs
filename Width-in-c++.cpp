#include<iostream>
using namespace std;
int main()
{
    int x;
    double a,y;
    cout<<"write one int l one doubl no"<<endl;
    cin>>x>>y;
    cout.width(10);
    cout.setf(ios::right);
    cout<<"y="<<x<<endl;
    cout.setf(ios::right);
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    a=x+y;
    cout<<"value of a="<<a<<endl;
    return 0;
}