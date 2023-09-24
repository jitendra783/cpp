//pure virtual function/abstract class
#include<iostream>
using namespace std;
class device
{
	protected:
		bool onoff;
	public:
		virtual void on()=0;
		virtual void off()=0;
};
class tv:public device
{
	int id;
	char name[20];
	char brand[30];
	public:
		void on()
		{
			onoff=0;
		}
		void off()
		{
			onoff=1;
		}
		void read()
		{
			cout<<"enter the id ,name and brand name of tv:...";
			cin>>id>>name>>brand;
		}
		void print()
		{
			cout<<"\n id:"<<id<<"\tname:"<<name<<"\tbrand:"<<brand<<"\tOnOff:"<<onoff;
		}
};
int main()
{
	tv t1;
	t1.read();
	t1.on();
	t1.print();
	t1.off();
	t1.print();
	return 0;
}
