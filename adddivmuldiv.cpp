#include <iostream>
using namespace std;
class A{
    int a,b;
    public:
    void show()
    {
        cout<<"Enter 2 numbers:"<<endl;
        cin>>a>>b;
        cout<<"Addition of 2 numbers is:\n"<<(a+b)<<endl;
        cout<<"Multiplication of 2 numbers is:\n"<<(a*b)<<endl;
        cout<<"Division of 2 numbers is:\n"<<(a/b)<<endl;
        cout<<"Remainder of 2 numbers is:\n"<<(a%b)<<endl<<"\n";
    }
    void show()
    {
        string x1;float y1;
        cout<<"Enter one string and one number:"<<endl;
        cin>>x1>>y1;
        cout<<"Entered String is:\n"<<x<<endl;
        cout<<"Entered number is:\n"<<y<<endl<<"\n";
    }
};
    class B:A{
        
    void show()
    {
        
    A::show();
    cout<<"Enter one character and one number:"<<endl;
    cin>>x>>y;
    cout<<"Entered character is:\n"<<x<<endl;
    cout<<"Entered number is:\n"<<y<<endl<<"\n";
    }
    
};
int main()
{
    B obj;
    B.show();
}