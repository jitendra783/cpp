#include<iostream>
using namespace std;
class Conversion
{
	int gb;
	int bytes;
	public:
		void get_gb()
		{
			cin>>gb;
		}
		operator Conversion()
		{
		   bytes=gb*1024;
		  // return bytes;
		}
		void display()
		{
			cout<<bytes;
		}
};
int main()
{
	Conversion p1,p2;
	p1.get_gb();
	p2=p1;
	p2.display();
	
}
