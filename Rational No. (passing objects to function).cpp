//passing objects to function
#include<iostream>
using namespace std;
class rational
{
	int n,d;
	public:
		void read()
		{
			cout<<"enter num and den\n";
			cin>>n>>d;
		}
		void print()
		{
			cout<<"the value of num="<<n<<"and den="<<d<<"\n";
		}
		void rational_m(rational r1,rational r2)
		{
			n=r1.n*r2.n;
			d=r1.d*r2.d;
		}
};
int main()
{
	rational r1,r2,r3;
	r1.read();
	r2.read();
	r3.rational_m(r1,r2);
	r3.print();
	return 0;
}
