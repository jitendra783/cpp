//constant objects---share
#include<iostream>
using namespace std;
class share
{
     char name[10];
	 char index[10];
	 int yearofstarting;
	 double npv;
	 char chairman[10];
	 int number;
	 public:
	 void get()
	 {
	 	cout<<"enter name\n";
	 	cin>>name;
	 	cout<<"enter index\n";
	 	cin>>index;
	 	cout<<"enter year of starting\n";
	 	cin>>yearofstarting;
	 	cout<<"enter name of chairman\n";
	 	cin>>chairman;
	 	cout<<"enter number\n";
	 	cin>>number;
	 }	
	 void setnpv(double n1)
	 {
	 	npv=n1;
	 }
	 double reportnpv()const
	 {
	 	return npv;
	 }
	 void display()
	 {
	 	cout<<"name:"<<name;
	 	cout<<"\n";
	 	cout<<"index:"<<index;
	 	cout<<"\n";
	 	cout<<"year of starting:"<<yearofstarting;
	 	cout<<"\n";
	 	cout<<"name of chairmam:"<<chairman;
	 	cout<<"\n";
	 	cout<<"phone number is:"<<number;
	 	cout<<"\n";
	 }
};
int main()
{
	share s1,s2;
	s1.get();
	s1.setnpv(100);
	cout<<"npv of first object:"<<s1.reportnpv();
	cout<<"\n";
	s2.get();
	cout<<"npv of second object:"<<s2.reportnpv();
	cout<<"\n";
	s1.display();
	s2.display();	
}
