//comparision with document class
#include<iostream>
#include<cstring>
using namespace std;
class document
{
	char name[20];
	char str[200];
	public:
		void get()
		{
			cout<<"enter the name of the document  ";
			cin>>name;
			cout<<"\nenter data ....\n";
			cin.getline(str,200,'.');
		}
		void print()
		{
			cout<<"\nname  :"<<name;
			cout<<"\n "<<str;
		}
		bool operator >(document d2)
		{
			int n1,n2;
			n1=strlen(str);
			n2=strlen(d2.str );
			if(n1>n2)
			return 1;
			else
			return 0;
		}
};
int main()
{
	document d1,d2;
	d1.get() ;
	d2.get() ;
	cout<<"\n\n printing greater string.........\n";
	if(d1>d2)
	d1.print() ;
	else
	d2.print() ;
	return 0;
}
