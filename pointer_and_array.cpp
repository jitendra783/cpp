//pointer array
#include<iostream>
using namespace std;
class mobile
{
	long int mobile_no;
	char name[30];
	double bal;
	int ccd;
	int cdu;
	public:
		void get()
		{
			cout<<"entere mobile number  \n";
			cin>>mobile_no;
			cout<<"enter your name  \n";
			cin>>name;
		}
		void init()
		{
			bal=0;
			ccd=0;
			cdu=0;
		}
		void recharge(double amnt)
		{
			bal+=amnt;
		}
		void calculate_cost(int time)
		{
			double cost;
			cost=time*60*0.40;
			cout<<"call cost is  "<<cost;
			ccd+=time;
		}
};
int main()
{
	mobile *p;
	p=new mobile;
	p->init() ;
	p->get();
	p->recharge(150);
	p->calculate_cost(65);
	return 0; 
}
