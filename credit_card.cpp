//  credit card
#include<iostream>
using namespace std;
class credit_card
{
	int card_no;
	int year_of_validity;
	char name_of_bank[40];
	int credit_limit;
	double balance;
	public:
		static long int count;
		credit_card()
		{
			count++;
			card_no=count;
		}
		void read()
		{
			cout<<"\n enter year of validity,name of the bank,credit limit(in rupees) and balance...\n";
			cin>>year_of_validity>>name_of_bank>>credit_limit>>balance;
			cout<<"your credit card number is "<<card_no;
		}
		int check_validity(int n)
		{
		return (year_of_validity-n);	
		}
		purchase()
		{
			
		}
		make_payment()
		{
			
		}
		check_balance()
		{
			
		}
};
long int credit_card :: count=29417000;
int main()
{
	credit_card c1;
	c1.read() ;
	cout<<"\n validity remaining  "<<c1.check_validity(2018)<<"years"; 
	
}
