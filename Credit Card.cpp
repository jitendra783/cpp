#include<iostream>
#include<string.h>
using namespace std;
class CreditCard
{
	int sum,yy,yy1,amt;
	int amount,remain,balance;
	char name[20];
	long int card_no,limit;
	public:
	CreditCard()
	{
		sum=0;
		amount=0;
		balance=20000;
		limit=50000;
		remain=balance;
	}
	void details()
	{
		cout<<"Enter Details Of Card Holder:: \n";
		cout<<"Enter Card No. : ";
		cin>>card_no;
		cout<<"Enter Name Of Person: ";
		cin>>name;
	}	
	int check()
	{
		cout<<"Enter Validity Year: ";
		cin>>yy;
		cout<<"Enter Current Year: ";
		cin>>yy1;
		if(yy1<=yy)
		return 1;
		return 0;
	}
	void purchase()
	{
		cout<<"Enter Purchase Amount: ";
		cin>>amount;
		if(sum<=balance)
		{
			sum+=amount;
			remain=balance-sum;
			cout<<"Remaining Balance: "<<remain<<endl;
		}
           else
		{
			cout<<"Insufficient Balance...........\n";	
		}	
	}
	void add_money()
	{
		cout<<"Enter Amount : ";
		cin>>amt;
		if((balance+amt)<=limit)
		{
			balance+=amt;
			remain=balance-sum;
			cout<<"Money Added Successfully........"<<endl;
		}
		else cout<<"Limit Exceed........."<<endl;
	}
	void show_details()
	{
		cout<<"\n-----------Details Of Card Holder----------\n"<<endl;
		cout<<"Card No           : "<<card_no<<endl;
		cout<<"Name              : "<<name<<endl;
		cout<<"limit             : "<<limit<<endl;
		cout<<"Purchase Amount   : "<<sum<<endl;
		cout<<"Remaining Balance : "<<remain<<endl;
	}			
};
int main()
{
	int ch,n,year;
	CreditCard obj;
	year=obj.check();
	if(year==1)
	{
		obj.details();
	do
	{
		cout<<"\nEnter Your Choice: ";
		cout<<"\n1.For Purchase\n2.Display\n3.Add Money\n4.Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:obj.purchase();
			break;
			case 2:obj.show_details();
			break;
			case 3:obj.add_money();
			break;
			case 4:exit(1);
			default:cout<<"Invalid Choice";
			break;
		}	
	}while(ch!=4);
	} 
	else cout<<"---------Card Expired---------"<<endl;
	return 0;
}
