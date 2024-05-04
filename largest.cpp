#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"enter 1 st no :";
	cin>>a;
	cout<<"enter 2nd no:";
	cin>>b;
	cout<<"enter 3rd no :";
	cin>>c;
	
	if (a>b && a>c){
		cout<<a<<"is a largest no";
		
	}
	else if(b>c && b>a){
	
	cout<<b<<"is largest no";
	
	
}
    else {
    	cout<<c<<"is the largest no:";
	}
}

