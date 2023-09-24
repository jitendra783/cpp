//overloading of parenthesis
#include<iostream>
using namespace std;
class date
{
	int d,m,y;
	public:
		void read()
		{
			cout<<"enter date (date,month,year)  ";
			cin>>d>>m>>y;
		}
		void print()
		{
			cout<<"\n"<<d<<"/"<<m<<"/"<<y;
		}
		void operator ()(int n)
		{
			y=n/365;
			n=n%365;
			m=m/30;
			d=n%30;
		}
		
};
int main()
{
	date d;
	d.operator()(800);
	d.print() ;
	return 0; 
}
