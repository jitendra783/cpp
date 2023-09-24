//inheritance program
#include<iostream>
using namespace std;
class person
{
	char name[30];
	int age;
	char address[100];
	public:
		void read()
		{
			cout<<"enter name ,age and adresss..\n";
			cin>>name>>age;
			cin.getline(address,100,'.');
		}
		void print()
		{
			cout<<"\nname  :"<<name;
			cout<<"\tage  :"<<age<<"  years old";
			cout<<"\taddress  :"<<address;
		}
 } ;
 class student : public person
 {
 	int roll;
 	char course[30];
 	double cgpa;
 	public:
 		void read()
 		{
 			person::read ();
 			cout<<"\n enter roll number,course and cgpa  \n";
 			cin>>roll>>course>>cgpa;
		}
		void print()
		{
			person::print() ;
			cout<<"\n roll no  :"<<roll<<"\tcourse  :"<<course<<"\tcgpa  :\n"<<cgpa;
		}
 };
 int main()
 {
 	student s;
 	s.read() ;
 	s.print() ;
 	return 0;
 }
