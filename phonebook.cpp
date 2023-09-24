#include<iostream>
using namespace std;
#include<fstream>
#include<conio.h>
class Phonebook
{
	char pname[20];
	char paddr[20];
	int phono;
	public:
	int pid;
		void read()
		{
			cout<<"\nenter pid:";
			cin>>pid;
			cout<<"\nenter pname:";
			cin>>pname;
			cout<<"\nenter paddr:";
			cin>>paddr;
			cout<<"\nenter phono:";
			cin>>phono;
		}
		void show()
		{
			cout<<"\npid:"<<pid;
			cout<<"\npname:"<<pname;
			cout<<"\nenter paddr:"<<paddr;
			cout<<"\nenter phono:"<<phono;
		}
};
int main()
{
	Phonebook b;
	char ch;
	fstream file;
	int i;
	file.open("phone.txt",ios::in | ios::out);
	for(i=0;i<3;i++)
	{
	    cout<<"enter data:";
		b.read();
		file.write((char*)&b,sizeof(b));
		ch=getch();
	}
	//sequential search//
	int id,n=0,loc=0;
	cout<<"enter the id to be searched:";
	cin>>id;
	while(!file.eof())
	{
		file.read((char*)&b,sizeof(b));
		if(b.pid==id)
		break;
	}
	b.show();
	//random search//
	cout<<"\n enter the id to be searched:";
	cin>>id;
	n=id-100;
	loc=n*sizeof(Phonebook);
	file.seekg(loc,ios::beg);
	//modify the data;
	
}
