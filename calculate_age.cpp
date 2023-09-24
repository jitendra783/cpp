//calculating age
#include<iostream>
using namespace std;
class date
{
	int d, m,y;
	public:
		void read()
		{
			cout<<"\n\tEnter date  ";
			cin>>d>>m>>y;
		}
		void print()
		{
			cout<<"\n your age is  "<<y<<" years "<<m<<" month "<<d<<" days";
		}
		void cal_age(date d1,date d2)
		{
			if(d1.d <d2.d )
			{
				d=(d1.d +30)-d2.d ;
				d1.m =d1.m -1;
			}
			else
			d=d1.d -d2.d ;
			if(d1.m <d2.m )
			{
				m=(d1.m +12)-d2.m ;
				d1.y =d1.y-1;
			}
			else
			m=d1.m -d2.m ;
			y=d1.y -d2.y ; 
		}
};
int main()
{
	date d1,d2,d3;
	cout<<"\nEnter Current Date : ";
	d1.read();
	cout<<"\nEnter the Birth Date: : ";
	d2.read();
	d3.cal_age(d1,d2);
	d3.print() ;
	return 0; 
}
