//switch case 

#include<iostream>
using namespace std;
int main()
{
    int n1;
    cin>>n1;
    char cal;
    cin >>cal;
    int n2;
    cin>>n2;
switch (cal)
{
case '+' :
cout<<n1+n2<<endl;
  break;

case '/' :
cout<<n1/n2<<endl;
  break;

case '*' :
cout<<n1*n2 <<endl;
  break;

case '-' :
cout<<n1-n2<<endl;
  break;

default:
cout<<"Invalid operator";
    break;
}
}
