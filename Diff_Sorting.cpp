//date difference and date sorting
#include<conio.h>
#include<iostream>
using namespace std;
class date
{
	int d,m,y;
	public:
		void read()
		{
			cout<<"enter date(date/month/year)";
			cin>>d>>m>>y;
		}
		void print()
		{
			cout<<"\n"<<d<<"/"<<m<<"/"<<y;
		}
		date operator -(date d2)			//operator overloading
		{
			date *d3=new date;
			if(d <d2.d )
			{
				d3->d=(d +30)-d2.d ;
				m =m -1;
			}
			else
			d3->d=d -d2.d ;
			if(m <d2.m )
			{
				d3->m=(m +12)-d2.m ;
					y =y-1;
			}
			else
			d3->m=m -d2.m ;
			d3->y=y -d2.y ;
			return *d3;
		}
		bool operator >(date d2)			//operator overloading
		{
				if(y>d2.y )
			return 1;
			else if(y==d2.y && m>d2.m )
			return 1;
			else if(m==d2.m && d>d2.d )
			return 1;
			else
			return 0;
		}
};
int main()
{
	date a1,a2,a3;//for difference
	a1.read() ;
	a2.read();
	a3=a1-a2;
	a1.print() ;
	a2.print() ;
	a3.print() ;
	date d[5],temp;		//array of dates
	for(int i=0;i<5;i++)
	d[i].read() ;
	for(int i=0;i<5;i++)
	d[i].print()  ;
	for(int i=0;i<4;i++)
	for(int j=i+1;j<5;j++)
		if(d[i]>d[j])
		{
			temp=d[i];
			d[i]=d[j];
			d[j]=temp;
		}
		cout<<"\n******************************************";
			for(int i=0;i<5;i++)
			d[i].print();
	getch();
}
