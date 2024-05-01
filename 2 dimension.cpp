//Two Dimensional Array
#include<iostream>
using namespace std;
int main()
{
    int a[2][2],i,j;
    cout<<"enter the element of array"<<endl;
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
          cin>>a[i][j];  
        } 

    }
    cout<<"the entered 2-D array is:"<<endl;
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<a[i][j]<<endl;
        }
    }
    
return 0;
}