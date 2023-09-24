//shorting of date 
#include<iostream>
#include<stdlib.h>
using namespace std;
class date
{
	int d,m,y;
	public:
		void read()
		{
			cout<<"\nenter date  ";
			cin>>d>>m>>y;
		}
		void print()
		{
			cout<<"\n"<<d<<"/"<<m<<"/"<<y;
		}
		bool compare(date d2)
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
		void sort(date d,int n )
		{
			date t;
			for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
			if(d[i].compare(d[j])==1 )
			{
				t=d[i];
				d[i]=d[j];
				d[j]=t;
			}
		}
};
int main()
{
	int n;
	cout<<"\nHow many Date u want to enter ";
	cin>>n;
	date d[10];
	for(int m=0;m<n;m++)
	{
		d[m].read() ;
	}
	date :: sort(d,n);
		for(int p=0;p<n;p++)
	{
		d[p].print() ;
	}
	return 0;
}
