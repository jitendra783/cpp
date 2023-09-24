//point 2d
#include<iostream>
#include<math.h>
using namespace std;
class point_2d
{
	int x,y;
	public:
		point_2d()
		{
			x=0;
			y=0;
		}
		point_2d(int a,int b)
		{
			x=a;
			y=b;
		}
		point_2d(point_2d &pp)
		{
			x=pp.x ;
			y=pp.y ;
		}
		void read()
		{
			cout<<"\n enter the coordinate of point ...  \n";
			cin>>x>>y;
		}
		int normalise()
		{
			return(sqrt((x*x)+(y*y)));
		}
		void print()
		{
			cout<<"\n x="<<x<<"\ty="<<y;
		}
};
int main()
{
	point_2d p1;
	p1.read() ;
	p1.print() ;
	point_2d p2(12,24);
	p2.print() ;
	point_2d p3(p2);
	p3.print() ;
	int n=p3.normalise() ;
	cout<<"\n normal="<<n;
	return 0;
}
