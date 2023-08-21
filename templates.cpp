#include<iostream>
using namespace std;
template<class t,int size>
class a
{
    public:
    t arr[size];
    void insert()
    {
        float i=1.0;
        for(int j=0;j<size;j++)
        {
            arr[j]=i;
            i++;
        }
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<"";
        }
    }
};
int main()
{
    a<float,5> t1;
    t1.insert();
    t1.display();
    return 0;
}