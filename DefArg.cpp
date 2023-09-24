//default arument
#include<conio.h>
#include<iostream>
using namespace std;
class time
{
	int h,m,s;
	public:
		void set(int=0,int=0,int=0);		//default value is zero
		void read()
		{
			cout<<"enter time..(hh:mm:ss)\n";
			cin>>h>>m>>s;
		}
		void print()
		{
			cout<< "\ntime is   "<<h<<":"<<m<<":"<<s;
		}
};
void time::set(int x,int y,int z)
{
	h=x;
	m=y;
	s=z;
 } 
 int main()
 {
 	time t1;
 	t1.set();
	t1.print() ;
    
       t1.set(5,30,30);
	t1.print() ;
	getch();
 }
