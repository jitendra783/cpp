//2-d point
#include<iostream>
#include<math.h>
using namespace std;
class point2d
{
    int x,y;
	public:
	void init()
	{
		x=0;
		y=0;
	}	
	void move(int a,int b)
	{
		x+=a;
		y+=b;
	}
	int normalize()
	{
		return(sqrt((x*x)+(y*y)));
	}
	void print()
	{
		cout<<"x="<<x<<"and y="<<y;
		cout<<"\n";
	}
};
int main()
{
	point2d p;
	p.init();
	p.move(6,8);
	cout<<p.normalize();
	cout<<"\n";
	p.print();
	return 0;
}
