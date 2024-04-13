//finding the greates number in nested if-else.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the 1st no :";
    cin>>a;
    cout<<"enter 2nd side :";
    cin>>b;
    cout<<"enter 3rd side :";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<"is greatest :";
        }
        else{
            cout<<c<<"is greatest ";
             
        }
    }
    else{
        if(b>c){
            cout<<b<<"is greatest ";
        }
        else{
            cout<<b<<"is greatest ";
        }
    }
        
    }
