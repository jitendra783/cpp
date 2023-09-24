//point class with unary operator
#include<iostream>
using namespace std;
class point
{
	int x,y;
	public:
		void read()
		{
			cout<<"enter cordinate of any point\n";
			cin>>x>>y;
		}
		void print()
		{
			cout<<"cordinate of point  ("<<x<<","<<y<<")"<<"\n";
		}
		void operator -()
		{
			x=-x;
			y=-y;
		}
};
int main()
{
	point p;
	p.read() ;
	p.print() ;
	-p;
	p.print() ;
	return 0;
}
