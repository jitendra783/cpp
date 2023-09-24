// pROGRAM fOR eNCRYPTION aND dECRYPTION OF a DICUMENT
#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
class document
{
	char name[30];
	int size;
	char data[200];
	public:
		void read()
		{
			cout<<"\n ENTER NAME  ";
			cin>>name;
			cout<<"\n ENTER SIZE OF DOCUMENT  ";
			cin>>size;
			cout<<"\n ENTER DATA-------";
			cin.getline(data,200,'.');
		}
		void print()
		{
			cout<<"\n NAME is   "<<name;
			cout<<"\n SIZE  "<<size;
			cout<<"\n DATE is -----\n"<<data;
		}
		void operator ++()			//overloading increment and decrement operator
		{
		for(int i=0;data[i]!='\0';i++)
		data[i]+=1;	
		}
		void operator --()
		{
			for(int i=0;data[i]!='\0';i++)
		data[i]-=1;	
		}
		void operator ++(int)
		{
			for(int i=0;data[i]!='\0';i++)
		data[i]+=1;	
		}
		void operator --(int)
		{
		for(int i=0;data[i]!='\0';i++)
		data[i]-=1;		
		}
};
int main()
{
	document d1;				//			creating object of document class
	d1.read() ;
	d1.print() ;
	d1.operator ++();		//			incryption
	d1.print() ;
	d1.operator --();		//	decryption
	d1.print() ;
	getch();
}
