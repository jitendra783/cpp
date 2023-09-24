//base to class and class to base conversion
#include<conio.h>
#include<iostream>
using namespace std;
class date
{
	int d,m,y;
	public:
		date(int x)				//base to class
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
		operator int()				//class to base
		{
			int x;
			x=(y*365)+(m*30)+d;
			return x;
		}
};
int main()
{
	int n=700;
	date d1(n);
	d1.print();
	int y=d1;
	cout<<"\n\n"<<y;
	getch();
}
