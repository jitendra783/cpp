#include<iostream>
using namespace std;
class Document
{
	char str[40];
	public:
		void getstr()
		{
			cin.getline(str,sizeof(str));
		}
		 operator int()
		{
			int c=0,i;
			for(i=0;str[i]!='\0';i++)
			{
				if(str[i]==' ')
				++c;
			}
			return c;
		}
		Document()
		{
			
		}
};
int main()
{
	char str[40];
	Document d;
	d.getstr();
	int x;
	x=d;
	cout<<d;
}
