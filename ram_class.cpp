//friend function
#include<iostream>
using namespace std;
class ram
{
	int size;
	int no_of_prog;
	int free_space;
	int occupied_space;
	public:
		ram()
		{
			size=1024;
			no_of_prog=0;
			free_space=1000;
			occupied_space=0;
		}
		friend void load_pgm(ram,program);
};
class program
{
	char name[20];
	int size;
	char language[20];
	public:
		void read()
		{
			cout<<"\n plz enter the name of program  ";
			cin>>name;
			cout<<"\n plz enter the size(in kb) of program  ";
			cin>>size;
			cout<<"\n plz enter the language of program  ";
			cin>>language;
		}
		friend void load_pgm(ram,program);
};
void load_pgm(ram &r1,program &p1)
{
	static int c=0;
	r1.free_space-=p1.size;
	r1.occupied_space+=p1.size;
	c++;
	r1.no_of_pgm=c;
}
int main()
{
	ram rr;
	program pp1,pp2;
	pp1.read() ;
	pp2.read() ;
	load_pgm(rr,pp1);
	rr1.print;
	load_pgm(rr1,pp2);
	rr1.print();
	return 0
}
