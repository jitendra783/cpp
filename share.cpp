//share manipulation and npv calculation
#include<iostream>
using namespace std;
class share
{
	char name[30];
	int year_of_starting;
	mutable double npv;
	char chairman[30];
	int number_of_share;
	public:
		share()
		{
		name[30]='\0';
		year_of_starting=0;
		npv=0;
		chairman[30]='\0';
		number_of_share=0;	
		}
		void get()
		{
			cout<<"enter the name of share holder  ";
			cin>>name;
			cout<<"\nenter the year of starting   ";
			cin>>year_of_starting;
			cout<<"\n enter npv ";
			cin>>npv;
			cout<<"\n name of chairman ";
			cin>>chairman;
			cout<<"\nenter the number of shares  ";
			cin>>number_of_share;
		}
		void set_npv(double n1)
		{
		npv=n1;	
		} 
		double reportnpv() const
		{
		return (npv);
		}
};
int main()
{
	share s1;
	s1.get() ;
	const share s2;
//	s2.get() ;
//	s2.set_npv(50);
	s1.set_npv(50); 
	cout<<"\n npv="<<s2.reportnpv() ;
	cout<<"\n npv="<<s1.reportnpv() ;
	return 0; 
}
