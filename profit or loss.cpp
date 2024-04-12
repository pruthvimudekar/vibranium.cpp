//profit or loss and equally.
#include<iostream>
using namespace std;
int main()
{
    int cp;
     cout<<"enter the cost price"<<endl; 
    cin>>cp;
   
    
     int sp;
     cout<<"enter the selling price"<<endl;
    cin>>sp;
  
    
    if(sp>cp){
        cout<<"profit :"<<sp-cp;
    }
    else if(sp<cp){
    cout<<"loss :"<<cp-sp;
    }
    else{
        cout<<"equally disturabution";
    }
}
