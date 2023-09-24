//distance_manipulation 
#include<iostream>
using namespace std;
class currency
{
	int rs,p;
	public:
		void read()
		{
			cout<<"enter amount in rupees and paise ";
			cin>>rs>>p;
		}
		void print()
		{
			cout<<"\n"<<"Rs. "<<rs<<" and "<<p<<" paisa";
		}
		void total(currency &c1,currency &c2)
		{
			int c=c1.p +c2.p  ;
			if(c>100)
			{
				rs=c1.rs +c2.rs +(c/100);
				p=c%100;
			}
			else
			{
				rs=c1.rs +c2.rs;
				p=c;
			}
		}
		void diff(currency &c1,currency &c2)
		{
			if(c1.p <c2.p  )
			{
				p=(c1.p +100)-c2.p ;
				c1.rs--;
			}
			else
			p=c1.p-c2.p ;
			rs=c1.rs -c2.rs ;
		}
};
int main()
{
	currency a,b,c,d;
	a.read() ;
	b.read() ;
	c.total(a,b);
	c.print() ;
	d.diff(c,a);
	d.print() ;
	 return 0; 
}
