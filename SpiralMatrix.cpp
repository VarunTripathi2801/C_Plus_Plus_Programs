#include<iostream>
using namespace std;
int main()
{
    int i,j,k,sr,er,sc,ec; // sr means starting row index & er means ending column index. Similarly, sc menas starting column index & ec menas ending column index
    sr=0,sc=0,k=0;
    cout<<"Enter no of rows:\n";
    cin>>er;
    cout<<"Enter no of columns:"<<endl;
    cin>>ec;
    int a[er][ec];
    cout<<"Enter the elements in the array:\n";
    for(i=0;i<er;i++)
    {
        for(j=0;j<ec;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Elements in the array:\n";
    for(i=0;i<er;i++)
    {
        for(j=0;j<ec;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"Spiral Matrix of order "<<er<<" X "<<ec<<endl<<"\n";
    while(k<=(er*ec))
    {
    for(i=sc;i<ec;i++)
    {
        cout<<a[sr][i]<<" ";
        ++k;
    }
    ++sr;
    for(i=sr;i<er;i++)
    {
        cout<<a[i][ec-1]<<" ";
        ++k;
    }
    --ec;
    for(i=ec;i>=sc;i--)
    {
        cout<<a[er-1][i]<<" ";
        ++k;
    }
    --er;
    for(i=er;i>=sr;i--)
    {
        cout<<a[i][sc]<<" ";
        ++k;
    }
    ++sc;
    }

}