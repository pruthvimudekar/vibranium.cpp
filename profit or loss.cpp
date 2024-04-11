//profit or loss and equally.
#include<iostream>
using namespace std;
int main()
{
    int cp;
    cout<<"enter the cost price :";
    cin>>cp;
    int sp;
    cout<<"enter the selling price :";
    cin>>sp;
    if(sp>cp){
        cout<<"profit";
    }
    if(sp<cp){
        cout<<"loss";
    }
    if(sp==cp){
        cout<<"No loss no profit";
    }
}
