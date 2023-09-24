//document increption and decreption program
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
			cout<<"\nenter name  ";
			cin>>name;
			cout<<"\n enter size of document  ";
			cin>>size;
			cout<<"\n enter data.....";
			cin.getline(data,200,'.');
		}
		void print()
		{
			cout<<"\n name is   "<<name;
			cout<<"\n size  "<<size;
			cout<<"\n data is____\n"<<data;
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
`{
	document d1;			//creating object of document class
	d1.read() ;
	d1.print() ;
	d1.operator ++();		//incryption
	d1.print() ;
	d1.operator --();		//decryption
	d1.print() ;
	return 0;
}
