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
			cout<<"\n*** ENTER  TITLE ans An Pricee Of Media "<<endl;
			cin>>title>>price;
		}
		void print()
		{
			cout<<"\n\tTitle:"<<title<<"\t\tPRICE:"<<price<<endl;
		}
};
class book:virtual public media
{
	int pages;
	public:
		void read()
		{
			media::read() ;
			cout<<"\n ENTER NO. OF PAGES Of THE BOOK \n";
			cin>>pages;
		}
		void print()
		{
			media::print () ;
			cout<<"\tPAGES:"<<pages;
		}
};
class cd :virtual public media
{
	int pts;
	public:
		void read()
		{
			media::read() ;
			cout<<"\n ENTER NUMBER OF POINTS IN THE CD\n";
			cin>>pts;
		}
		void print()
		{
			media::print () ;
			cout<<"\tNUMBER OF POINTS :"<<pts;
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
			cout<<"\n ENTER SUBJECT CODE AND SUBJECT NAME"<<endl;
			cin>>scode>>subject_name;
		}
		void print()
		{
			media::print() ;
			cout<<"\t SUBJECT CODE: "<<scode<<"\t SUBJECT NAME :"<<subject_name;
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
