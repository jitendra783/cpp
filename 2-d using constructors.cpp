//2-d using constructors
#include<iostream>
#include<math.h>
using namespace std;
class point2d
{
    int x,y;
	public:
	point2d()//default constructor
	{
		x=0;
		y=0;
	}
	point2d(int a,int b)//parametrized constructor
	{
		x=a;
		y=b;
	}
	point2d(point2d &p1)//copy constructor
	{
		x=p1.x;
		y=p1.y;
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
	cout<<"default constructor";
	p.print();
	point2d p1(3,5);
	cout<<"default constructor:\n";
	p1.print();
	point2d &p2=p1;
	cout<<"copy constructor:\n";
	p2.print();
	p.move(6,8);
	cout<<p.normalize();
	cout<<"\n";
	p.print();
	return 0;
}
