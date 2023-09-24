//electricity bill payment
#include<iostream>
using namespace std;
class electricity
{
	int consumer_id;
	char name[30];
	char address[40];
	int starting_year;
	mutable double bill;
	public:
		static int count;
		electricity()
		{
			count++;
			consumer_id=count;
		}
		void read()
		{
		cout<<"\n plz enter name  ";
		cin>>name;
		cout<<"\nenter your address  ";
		cin>>address;
		cout<<"\n enter the starting year  ";
		cin>>starting_year;
		bill=0;
		cout<<"\n\n your consumer id="<<consumer_id;
		}
		void calculate_bill(int m)
		{
			bill=bill+(3*m);
		}
		double reportbill()
		{
			return (bill);
		}
};
int electricity ::count=111;
int main()
{
	electricity e1;
	e1.read() ;
	cout<<"\n your bill=Rs. "<<e1.reportbill() ;
	e1.calculate_bill(400);
	cout<<"\n your bill=Rs. "<<e1.reportbill() ; 
	return 0;
}
