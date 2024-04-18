// Friend Fuction using Function 
#include<iostream>
using namespace std;
class Box
{
	private:
		int len;
	public:
		Box()
		{
		   len=0;
		}	
		friend int print(Box);
};
print(Box b)
{
	b.len+=10;
	return b.len;
}
int main()
{
	Box b2;
	cout<<print(b2);
	return 0;
}
