//constructor manipulation
#include<iostream>
using namespace std;
class time
{
	int h;
	int m;
	int s;
	public:
		time()			//default constructor
		{
			h=0;
			m=0;
			s=0;
		}
		time(int a,int b,int c)		//parameterised constructor
		{
			h=a;
			m=b;
			s=c;
		}
		void read()
		{
			cout<<"enter time (hour,minute,second)...\n";
			cin>>h>>m>>s;
		}
		void print()
		{
			cout<<"\n"<<h<<" hours "<<m<<" minutes "<<s<<" seconds ";
		}
		void validate(time &d)
		{
			if(d.s >60 || d.m >60)
			cout<<"\n time is invalid..... ";
			else
			cout<<"\n time is valid ";
		}
		
};
int main()
{
	time t1;			//calling default constructor
	time t2(2,34,56);		//calling parameterised constructor
	t1.read() ;
	t1.print() ;
	t2.print() ;
	time t3=t1;
	t1.validate(t1);
	t3.print() ; 
	return 0;
}
