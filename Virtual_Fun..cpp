#include<iostream>
using namespace std;
class regular_buyer;
class buyer
{
	int id;

	protected:
	float discount;
		float amount;
	public:
		void read()
		{
			cout<<"ENTER ID AMOUNT AND DISCOUNT(%):";
			cin>>id>>amount>>discount;
		}
		virtual void cal_dis()
		{
			amount=amount-(amount*discount/100);
		}
		void print()
		{
		cout<<"\nID:"<<id<<"\tAMOUNT:"<<amount	<<"\t DISCOUNT:"<<discount<<"%";
		}
		
};
class regular_buyer : protected buyer
{
	int no_of_trans;
	public:
		void read()
		{
			buyer::read() ;
			cout<<"ENTER THE NUMBER OF TRANSACTION ";
			cin>>no_of_trans;
		}
		void cal_dis()
		{
			if(no_of_trans>10)
			amount=amount-(amount*2*discount/100);
		}
		void print()
		{
			buyer::print();
			cout<<"\t NUMBER OF TRANSACTION:"<<no_of_trans;
		}
};
int main()
{
	buyer b1;
	b1.read() ;
	b1.cal_dis();
	b1.print();
	regular_buyer b2;
	b2.read();
	b2.cal_dis();
	b2.print() ;
	return 0;
}
