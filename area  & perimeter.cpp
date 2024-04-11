//area and perimenter finding :
#include <iostream>
using namespace std;
int main()
{
    int l,b,a, perimeter;
    
    cout<<"enter the length :";
            cin>>l;
    cout<<"enter the breath :";   
            cin>>b;

          a=l*b;
          perimeter = 2*(l+b);

    cout<<"Area :"<<a<<endl;
    cout<<"perimeter :"<<perimeter;
}
