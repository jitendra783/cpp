#include<iostream>
using namespace std;
class calculate_area
{
	
	public:
		int A;
		virtual void area()=0;
		virtual void show()=0;
};
class c: public calculate_area
{
	int r;
	public: 
	c()
	{
		r=7;
	}
	void area()
	{
		A=3.14*7*7;
	}
	void show()
	{
		cout<<"\nArea="<<A;
	}
};

class s: public calculate_area
{
	int a,b;
	public: 
	s()
	{
		a=4,b=5;
	}
	void area()
	{
		A=a*b;
	}
	void show()
	{
		cout<<"\nArea="<<A;
	}
};


class r: public calculate_area
{
	int a,b;
	public: 
	r()
	{
		a=10,b=20;
	}
	void area()
	{
		A=a*b;
	}
	void show()
	{
		cout<<"\nArea="<<A;
	}
};
int main()
{
	c c1;
	s s1;
	r r1;
	s1.area();
	c1.area();
	r1.area();
	s1.show();
	c1.show();
	r1.show();
}
