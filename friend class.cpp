#include<iostream>
using namespace std;
#include<conio.h>
class Rectangle
{
	private:
		int a,b;
	public:
		Rectangle()
		{
			a=10;
			b=20;
		}
		friend class Square;
};
class Square
{
	int s;
	public:
		Square()
		{
			s=4;
		}
		void show()
		{
			cout<<"The value of S: "<<s<<endl;
		}
		void show1(Rectangle &obj)
		{
			cout<<"\nThe value of A & B: "<<obj.a<<" "<<obj.b<<endl;
		}
		void area()
		{
			
			cout<<"\nArea of Square:  "<<s*s;
		}
		void area1(Rectangle &obj)
		{
			
			cout<<"\nArea of Rectangel:  "<<obj.a*obj.b;
		}
};
int main()
{
	Square y;
	Rectangle  x;
	y.show();
	
	y.show1(x);
	y.area();
	y.area1(x);
}
