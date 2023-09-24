// dates increment and decrement using unary operator overloading
#include<conio.h>
#include<iostream>
using namespace std;
//class definition
class date
{
	int d,m,y;
	public:
		void read()
		{
			cout<<"enter date(dd-mm-yy)   ";
			cin>>d>>m>>y;
		}
		void print()
		{
			cout<<"\n"<<d<<"/"<<m<<"/"<<y;
		}
		void operator ++()					//pre increment
		{
			cout<<"\n pre-increment.......";
			d+=1;
			m+=d/30;
			d=d%30;
			y+=m/12;
			m=m%12;
		}
		void operator ++(int)			//post  increment
		{
			cout<<"\n post-increment.......";
			d+=1;
			m+=d/30;
			d=d%30;
			y+=m/12;
			m=m%12;
		}
			void operator --()			//pre decrement
		{
			cout<<"\n pre-dayecrement.......";
			d-=1;
			m-=d/30;
			d=d%30;
			y-=m/12;
			m=m%12;
		}
		void operator --(int)			//post decrement
		{
			cout<<"\n post-dayecrement.......";
			d-=1;
			m-=d/30;
			d=d%30;
			y-=m/12;
			m=m%12;
		}
};
int main()
{
	date d1;
	d1.read() ;
	d1.operator ++();
	d1.print() ;
	d1++;
	d1.print();
	++d1;
	d1.print() ;
	d1--;
	d1.print() ;
	getch();
}
