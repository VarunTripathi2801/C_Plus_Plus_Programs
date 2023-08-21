#include<iostream>
using namespace std;
class num
{
    int sq;
    public:
    void set(int n)
    {
        sq=n;
    }
    int get(int q)
    {
        return q;
    }
    virtual double squcu(void)=0;
};
class num1:public num
{
    int q;
    public:
    double squcu(void)
    {
        return (get(q)*get(q));
    }
};
class num2:public num
{
    int q;
    public:
    double squcu(void)
    {
        return (get(q)*get(q)*get(q));
    }
};
//class num3:public num
//{
    //int no1,no2;
    //public:
   // double squcu(void)
    //{
        //cout<<"Enter 2 numbers:\n";
        //cin>>no1>>no2;
        //return (get(no1)/get(no2));
    //}
//}; 
int main()
{
    double a1,a2,a3;
    num1 n1;
    num2 n2;
    num*nn1=&n1;
    num*nn2=&n2;
    (*nn1).set(2);
    (*nn2).set(4);
    a1=(*nn1).squcu();
    a2=(*nn2).squcu();
    cout<<"a1 = "<<a1<<endl; 
    cout<<"a2 = "<<a2<<endl;
    return 0;
}