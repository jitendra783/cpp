#include<iostream>
#include<stdlib.h>
using namespace std;

class Mobileaccount
{
	long long int mno,tcd,rec;
	char name[20],city[10];
	double bal;
	public:
		void getinfo()
		{
			cout<<"Enter Mobile Number: ";
			cin>>mno;
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter City: ";
			cin>>city;
		}
		Mobileaccount()
		{
			bal=0.00;
			tcd=0;
		}
		void recharge()
		{
			cout<<"Enter Recharge Amount: ";
			cin>>rec;
			bal=bal+rec;
		}
		void callcost()
		{
			int time;
			double cost;
			cout<<"Enter Duration Of Call ( In Min ): ";
			cin>>time;
			cost=time*0.40;
			tcd=tcd+time;
			if(cost<=bal)
			
				bal=bal-cost;
			else
			cout<<"\n------INSUFFICIENT BALANCE-----"<<endl;
			cout<<"\nRemaining Balance: "<<bal<<endl;
		}
		void display()
		{
			cout<<"\n\tMobile Number: "<<mno<<endl;
			cout<<"\tCustomer Name: "<<name<<endl;
			cout<<"\tCity         : "<<city<<endl;
			cout<<"\tBalance      : "<<bal<<endl;
		}
};
int main()
{
	int ch;
  Mobileaccount M;
  
  M.getinfo();
   do
   {
  	cout<<"\n\nEnter Your Choice: ";
  	cout<<"\n1.Recharge\n2.Calling\n3.Display\n4.Exit::   ";
  	cin>>ch;
  	switch(ch)
  	{
  		case 1:M.recharge();
  		break;
  		case 2:M.callcost();
  		break;
  		case 3:M.display();
  		break;
  		case 4:exit(1);
  		default:cout<<"Wrong Option"<<endl;
  		break;
	}
  }while(ch!=4);
 
  return 0;
}
