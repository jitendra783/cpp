#include<iostream>
using namespace std;
class Vector
{
	char direc[20];
	int val;
	public:
		void get_vector()
		{
			cin>>val;
			cin>>direc;
		}
		void put_vector()
		{
			cout<<val;
			cout<<direc;
		}
};
class Physics:public Vector
{
	int ;
	char subject[20];
	public:
		void get_phy()
		{
			cin>>pgs;
			cin>>subject;
		}
		void put_book()
		{
			cout<<pgs;
			cout<<subject;
		}
};
class Cd:public Media,public Book
{
	int size;
	char name[20];
	public:
		void get_cd()
		{
			cin>>size;
			cin>>name;
		}
		void put_cd()
		{
			cout<<size;
			cout<<name;
		}
};
int main()
{
	Media m;
	m.get_media();
	Book b;
	b.get_media();
	Cd c;
	c.get_media();
}
