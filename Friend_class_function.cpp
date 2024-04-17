//Friend_ class function 
#include<iostream>
using namespace std;
class a
{
	public :
		int x=0;
		void setx(int i)
		{
			x=i;
		}
		friend class b;
};
class b
{
	public:
	void print(a &a1)
	{
		cout<<a1.x;
	}
};
int main()
{
	a a1;
	b b1;
	b1.print(a1);
	return 0;
}
