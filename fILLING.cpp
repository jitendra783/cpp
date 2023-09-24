// PHONE_BOOK
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class phonebook
{
	int number;
	char name[30];
	public:
		void read()
		{
			cout<<"\n ENTER PHONE NUMBER AND NAME   : ";
			cin>>number>>name;
		}
		void print()
		{
			cout<<"\n"<<name<<"\t"<<number;
		}
};
int main()
{
	phonebook p1;
	fstream f1;
	f1.open("phonebook.dat",ios::in);
	p1.read() ;
	f1.write((char*)&p1,sizeof(p1));  
	f1.close() ;
	
	getch();
}
