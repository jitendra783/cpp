// cOUNTIN tHE tOTAL nUMEBR oF wORDS iN wORD fILE
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
			cout<<"ENTER NAME:";
			cin>>name;
			cout<<"\n ENTER DATA -----\n";
			cin.getline(data,21,'.');
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
	cout<<"\n\n\n"<<num;
	getch();
}
