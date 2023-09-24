//counting total words in a word
#include<iostream>
#include<conio.h>
using namespace std;
class document
{
	char name[20];
	char *data;
	public:
		document()
		{
			data=new char[20];
		}
		void read()
		{
			cout<<"enter name  :";
			cin>>name;
			cout<<"\n enter data  .....\n";
			cin.getline(data,20,'.');
		}
		void print()
		{
			cout<<"\n"<<data;
		}
		operator int()
		{
			int count=1;
			for(int i=0;data[i]!='\0';i++)
			{
				if(data[i]==' '||data[i]==','||data[i]=='.')
				{
					count++;
					i++;
				}
			}
			return count;
		}
};
int main()
{
	int num;
	document d;
	d.read() ;
	num=d;
	cout<<"\n\n"<<num;
	getch();
}
