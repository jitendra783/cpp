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
			cout<<"enter id,amount and discount(%):";
			cin>>id>>amount>>discount;
		}
		virtual void cal_dis()
		{
			amount=amount-(amount*discount/100);
		}
		void print()
		{
		cout<<"\nid:"<<id<<"\tamount:"<<amount	<<"\t discount:"<<discount<<"%";
		}
		
};
class regular_buyer : protected buyer
{
	int no_of_trans;
	public:
		void read()
		{
			buyer::read() ;
			cout<<"ener the number of transaction  ";
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
			cout<<"\t number of transaction:"<<no_of_trans;
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
