//distance_manipulation 
#include<iostream>
using namespace std;
class dis
{
	int km,m;
	public:
		void read()
		{
			cout<<"enter distance in km and m";
			cin>>km>>m;
		}
		void print()
		{
			cout<<"\n"<<km<<"  km and "<<m<<" m";
		}
		void total(dis &d1,dis &d2)
		{
			int d=d1.m +d2.m ;
			if(d>1000)
			{
				km=d1.km +d2.km +(d/1000);
				m=d%1000;
			}
			else
			{
				km=d1.km +d2.km;
				m=d;
			}
		}
		void diff(dis &d1,dis &d2)
		{
			if(d1.m <d2.m )
			{
				m=(d1.m +1000)-d2.m ;
				d1.km--;
			}
			else
			m=d1.m -d2.m ;
			km=d1.km -d2.km ;
		}
};
int main()
{
	dis dt,to,dn,dm;
	dt.read() ;
	to.read() ;
	dn.total(dt,to);
	dn.print() ;
	dm.diff(dn,dt);
	dm.print() ;
	 return 0; 
}
