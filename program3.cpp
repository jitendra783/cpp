#include<iostream>
using namespace std;
class Passphrase
{
	char str[30];
	char pass[10];
	public:
		void get_str()
		{
			cin>>str;
		}
		operator Passphrase()
		{
			pass[0]=str[0];
			int k=1,i;
			for(i=0;str[i]!='\0';i++)
			{
				if(str[i]==' ')
				pass[++k]=str[i+1];
			}
			str[++i]='\0';
		}
		void display()
		{
			cout<<pass;
		}
};
int main()
{
	Passphrase p1,p2;
	p1.get_str();
	p2=p1;
	p2.display();	
}
