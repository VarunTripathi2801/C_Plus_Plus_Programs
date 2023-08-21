#include<iostream>
using namespace std;
class rect
{
    friend string area(const rect&a);
    string x,y;
    public:
    rect(string l,string w)
    {
        x=l;
        y=w;
        
    }
};
string area(const rect&b)
{
    return b.x+b.y;
};
int main()
{
    rect r1("hello","java"),r2("sahil","4");
    cout<<"Area of R1="<<area(r1)<<"\n";
    cout<<"Area of R2="<<area(r2)<<"\n";
    return 0;

}

    
