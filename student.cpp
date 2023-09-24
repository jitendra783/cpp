//student addmision
#include<iostream>
using namespace std;
class student
{
	int roll;
	char name[30];
	char address[200];
	public:
		static int count;
		student()
		{
			count++;
			roll=count;
		}
		void read()
		{
			cout<<"enter name  \n";
			cin>>name;
			cout<<"enter address  \n";
			cin>>address;
		}
		void print()
		{
			cout<<"\n roll no="<<roll<<"\tname="<<name<<"\taddress="<<address;
		}
};
int student :: count =0;
int main()
{
	student s1,s2,s3;
	s1.read() ;
	s2.read() ;
	s3.read() ;
	s1.print() ;
	s2.print() ;
	s3.print() ;
	return 0;
}
