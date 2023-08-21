#include<iostream>
using namespace std;
class Initials:
{
    string n,mn,fn;
    int mon;
    char dob;
    public:
    void details()
    {
        cout<<"Enter your name:"<<endl;
        cin>>n;
        cout<<"Enter father's name:"<<endl;
        cin>>fn;
        cout<<"Enter mother's name:"<<endl;
        cin>>mn;
        cout<<"Enter mobile number :"<<endl;
        cin>>mon;
        cout<<"Enter date of birth:"<<endl;
        cin>>dob;
    }
    void display()
    {
        cout<<"Your name is: "<<n<<endl;
        cout<<"Your father's name: "<<fn<<endl;
        cout<<"Your mother's name: "<<mn<<endl;
        cout<<"Your mobile number: "<<mon<<endl;
        cout<<"Your date of birth: "<<dob<<endl;
    }

};
class Fees:Initials
{
    double te,fp;
    public:
    void ff()
    {
    Initials::details();
    Initials::display();
    cout<<"Enter total fees"<<endl;
    cin>>te;
    cout<<"Total fees ="<<te<<endl;
    cout<<"Enter paid fees"<<endl;
    cin>>fp;
    cout<<"fees paid="<<fp<<endl;
    if(te>fp)
    {
        cout<<"Remaining fees left is ="<<(te-fp)<<endl;
    }
    else
    {
        cout<<"Total fees is paid"<<endl;
    }
    }
    
};
class Result:Fees
{
        double mm,mt,per;
        public:
        void fin()
        {
        Fees::ff();
        cout<<"Enter the maximum marks:"<<endl;
        cin>>mm;
        cout<<"Enter the marks obtained:"<<endl;
        cin>>mt;
        per=(mm/mt)*100;
        cout<<"Obtained percentage is ="<<per<<endl;
        }
};
    
int main()
{
    Fees obj;
    Result obj1;
    obj.ff();
    obj1.fin();
}


