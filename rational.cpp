#include<iostream>
using namespace std;
class rational
{
	int n,d;
	public:
		void read()
		{
			cout<<"\nenter any numerator and denominator of ant rational number  ";
			cin>>n>>d;
		}
		void print()
		{
			cout<<"required rational no="<<n<<"/"<<d;
		}
		void rational_mul(rational &r1,rational &r2)
		{
			n=r1.n * r2.n ;
			d=r1.d *r2.d ;
		}
		/*rational & rational_mul1(rational &r2)
		{
			rational *t=new rational;
			t->n =n*r2.n ;
			t->d =d*r2.d ;
			return(&t);
		 }*/ 
};
int main()
{
	rational r1,r2,r3;
	r1.read() ;
	r2.read() ;
	r3.rational_mul(r1,r2);
	r3.print() ;
//	rational &r4=r1.rational_mul1(r2);
//	r4.print() ;
	return 0;  
}
