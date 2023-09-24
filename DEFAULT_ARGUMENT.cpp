// DEFAULT ARGUMENT
#include<conio.h>
#include<iostream>
using namespace std;
class time
{
	int h,m,s;
	public:
		void set(int=0,int=0,int=0);		// DEFAULT ARGUMENT VALUE IS ZERO
		void read()
		{
			cout<<"ENTER TIME..(HH:MM:SS)\n";
			cin>>h>>m>>s;
		}
		void print()
		{
			cout<< "\nTIME IS   "<<h<<":"<<m<<":"<<s;
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
    
       t1.set(7,20,40);
	t1.print() ;
	getch();
 }
