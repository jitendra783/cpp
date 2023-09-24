#include<iostream>
using namespace std;
class Time
{
	int h,m,s;
	public:
		void read()
		{
			cout<<"Enter Time In ( HH:MM:SS ) Formate:: "<<"\t";
		}
		Time()
		{
			this->h=00;
			this->m=00;
			this->s=00;
		}
		void show()
		{
			cout<<"Default Constructor\n";
			cout<<"HH:MM:SS  "<<h<<" "<<m<<" "<<s<<endl;
		}
		Time(int h,int m,int s)
		{
			this->h=h;
			this->m=m;
			this->s=s;
		}
		void display()
		{
			cout<<"Parameterize Constructor\n";
			cout<<"HH:MM:SS  "<<h<<" "<<m<<" "<<s<<endl;
		}
		Time(Time & s)
		{
			this->h=s.h;
			this->m=s.m;
			this->s=s.s;
		}
		void display1()
		{
			cout<<"Copy Constructor\n";
			cout<<"HH:MM:SS  "<<h<<" "<<m<<" "<<s<<endl;
		}
};
int main()
{
	Time obj,obj2(23,59,59),obj3;
	obj.show();
	obj2.display();
	obj3=obj2;
	obj3.display1();
}
