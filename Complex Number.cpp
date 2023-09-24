#include<iostream>
using namespace std;
class complex
{
     int x,y;
	 public:
	 void read()
	 {
	 	cout<<"enter value of x and y";
	 	cin>>x>>y;
	 }	
	 void print()
	 {
	 	cout<<"the given complex no is\n";
	 	cout<<""<<x<<"+"<<y<<"i";
	 }
};
int main()
{
	complex c;
	c.read();
	c.print();
	return 0;
}
