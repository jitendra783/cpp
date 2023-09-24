//pizza program
#include<iostream>
using namespace std;
class pizza
{
	int diameter;
	double price;
	public:
		void read()
		{
			cout<<"\n enter diameter and price of the pizza  ";
			cin>>diameter>>price;
		}
		void print()
		{
			cout<<"\n lowest price .....PIZZA....";
			cout<<"\n diameter="<<diameter<<"\t\tprice=Rs. "<<price;
		}
		double area()				// calculating area
		{
			double a,r;
			r=diameter/2;
			a=3.14*r*r;
			return a;
		}
		pizza compare(pizza &p2)		//comparing two pizza
		{
			if((price /area()) <(p2.price /p2.area() ))
			return *this;
			else
			return p2;
		}
};
int main()
{
	pizza p1,p2,p3;
	p1.read() ;
	p2.read() ;
	p3=p1.compare(p2);
	p3.print () ;
	return 0; 
}
