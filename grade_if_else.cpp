//percent of student and print the grade according to marks..
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter marks :";
    cin>>n;
    if(n>=81 && n<=100)
    {
        cout<<"very good";

    }
    if(n>=61 && n<=80) //also use if else and no write to n<80 it can change
    {
        cout<<"good";
    }
        if(n>=41&& n<=80)  //if else
        {
            cout<<"average";
        }
        if(n<=40)           //only else
        {
            cout<<"fail";
        }
    
    }
