#include<iostream>
using namespace std;
int main()
{
int a=10,x;
int *ptr;
ptr=&a;
/* cout<<"\n******\n";        //1
cout<<"ptr = "<<ptr<<endl;
x=*ptr;
cout<<"*ptr = "<<x<<endl;
x=*ptr++;
cout<<"x = "<<x<<endl;         //1


cout<<"\n******\n";         //2
x=*ptr;
cout<<"*ptr="<<x<<endl;
x=*++ptr;
cout<<"x = "<<x<<endl;     //2


cout<<"\n******\n";        //3
x=*ptr;
cout<<"*ptr="<<x<<endl;       
x=++*ptr;
cout<<"x = "<<x<<endl;
cout<<"\n******\n";        //3

x=*ptr;
cout<<"*ptr="<<x<<endl;     
x=(*ptr)++;
cout<<"x = "<<x<<endl; */
cout<<"\n******\n";

x=*ptr;
ptr=ptr+1;
cout<<"\n******\n";
cout<<"x = "<<x<<endl;
cout<<"ptr = "<<ptr<<endl;
cout<<"\n******\n";
*++ptr;
ptr=ptr+1;
x=*ptr;
cout<<"x = "<<x<<endl;
cout<<"ptr = "<<ptr<<endl;
cout<<"\n******\n";
x=++*ptr;
*ptr=*ptr+1;
x=*ptr;
cout<<"x = "<<x<<endl;
cout<<"ptr = "<<ptr<<endl;
cout<<"\n******\n";
x=(*ptr)++;
x=*ptr;
*ptr=*ptr+1;
cout<<"x = "<<x<<endl;
cout<<"ptr = "<<ptr<<endl;
return 0;
}