/*
Base To CLASS AND CLASS TO BASE CONVERSION
*/
#include<conio.h>
#include<iostream>
using namespace std;
class date
{
	int d,m,y;
	public:
		date(int x)				//    BASE CLASS
		{
			y=x/365;
			x=x%365;
			m=x/30;
			d=x%30;
		}
		void print()
		{
			cout<<d<<"/"<<m<<"/"<<y;
		}
		operator int()				//  CLASS TO BASE
		{
			int x;
			x=(y*365)+(m*30)+d;
			return x;
		}
};
int main()
{
	int n=800;
	date d1(n);
	d1.print();
	int y=d1;
	cout<<"\n\n"<<y;
	getch();
}
