#include<iostream>
using namespace std;
class rect
{
    friend int rect(const rect&a);
    
    int x,y;
    public:
    rect(int l,int w)
    {
        x=l;
        y=w;
        
    }
    rect (){};
rect& operator+(const rect&b)
{
    x=x+b.x;
    y=y+b.y;
    
}
void display()
{
    cout<<"Resultant number is="<<x<<endl<<y<<endl;
}
};
int main()
{
    rect r1(16,21),r2(5,6),d;
    d=r1+r2;
    d.display();
    return 0;

}

    
