#include<iostream>
using namespace std;
class validate
{
	int date,month,year;
	public:
		void read()
		{
			cout<<"enter the dd/mm/yyyy: "<<endl;
			cin>>date>>month>>year;
			
		}
		void print()
		{
			cout<<"date:"<<date<<"\t"<<"month:"<<month<<"\t"<<"year"<<year<<endl<<endl;
		}
		int valid()
		{
			if(year%4==0)
			{
				if((month==2 && (date>0 && date<=29))||((month==1||month==3||month==5||month==7||month==8||month==10||month==12) &&(date>0 && date<=31))||((month==9||month==11||month==6||month==4) &&(date>0 && date<=30)))
				cout<<"Valid Date"<<endl;
				else cout<<"Invalid Date"<<endl;
			}
			else
			{
				if((month==2 && (date>0 && date<=28))||((month==1||month==3||month==5||month==7||month==8||month==10||month==12) &&(date>0 && date<=31))||((month==9||month==11||month==6||month==4) &&(date>0 && date<=30)))
				cout<<"Valid Date"<<endl;
				else cout<<"Invalid Date"<<endl;
			}
			
			
		}
		
		
};
int main()
{
	
	validate ob;
	ob.read();
	ob.print();
	ob.valid();
	return 0;
}
