#include<iostream>
using namespace std;
int main()
{
    char str[20],str1[20],str2[20];
    cout<<"Enter a string:"<<endl;
    cin.getline(str,20);         
    cout<<str<<endl;        // prints entire string with 19 characters
    
   /*  cout<<"Enter a string:"<<endl;
    gets(str);
    cout<<str<<endl;                // prints entire string with 19 characters

    cout<<"Enter a string:"<<endl;
    cin>>str;
    cout<<str<<endl;            // prints only first word in the string */

    cout<<"Enter another string:"<<endl;
    cin.getline(str1,20);
    int j=0;
    
    for(int i=0;i<(str.length());i++)
    {
        str2[j++]=str[i];
    }
    for(int i=0;i<(str1.length());i++)
    {
        str2[j++]=str1[i];

    }
    cout<<"Copied string is: "<<str2;
    
    return 0;

}