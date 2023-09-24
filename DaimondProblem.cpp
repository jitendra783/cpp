#include<conio.h>
#include<iostream>
using namespace std;
class media
{
	char title[30];
	float price;
	public:
		void read()
		{
			cout<<"enter title an price of media\n";
			cin>>title>>price;
		}
		void print()
		{
			cout<<"\ntitle:"<<title<<"\tprice:"<<price;
		}
};
class book:virtual public media
{
	int pages;
	public:
		void read()
		{
			media::read() ;
			cout<<"\n enter number of pages of the book\n";
			cin>>pages;
		}
		void print()
		{
			media::print () ;
			cout<<"\tpages:"<<pages;
		}
};
class cd :virtual public media
{
	int pts;
	public:
		void read()
		{
			media::read() ;
			cout<<"\n enter number of points in the cd\n";
			cin>>pts;
		}
		void print()
		{
			media::print () ;
			cout<<"\t no of points :"<<pts;
		}
};
class sub_material:public book,public cd
{
	int scode;
	char subject_name[30];
	public:
		void read()
		{
			media::read();
			cout<<"\n enter sunject code and subject name \n";
			cin>>scode>>subject_name;
		}
		void print()
		{
			media::print() ;
			cout<<"\t subject code :"<<scode<<"\tsub name:"<<subject_name;
		}
};
int main()
{
	sub_material s1;
	s1.read() ;
	s1.print() ;
	book b1;
	b1.read() ;
	b1.print() ;
	getch();
}
