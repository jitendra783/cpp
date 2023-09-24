#include<iostream>
using namespace std;

class Rational
{
	int x,y;
	public:
		void read()
		{
			cout<<"Enter Value Of ( X and Y )";
			cin>>x>>y;
		}
		void print()
		{
			cout<<"Numerator Is: "<<x<<endl;
			cout<<"Denominator Is: "<<y<<endl;
		}
		void evaluate()
		{
			cout<<"\nEvalution of the given number: "<<x<<"/"<<y;
		}
};
int main()
{
	Rational obj;
	obj.read();
	obj.print();
	obj.evaluate();
}
