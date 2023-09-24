//overloading of << and >>
#include<iostream>
using namespace std;
class point
{
	int x,y;
	public:
	friend istream & operator >> (istream& ,point & );
	friend ostream & operator << (ostream& ,point & );
};
	
		istream & operator >> (istream& in,point & p)
		{
			cout<<"enter co-ordinate of point ";
			in>>p.x>>p.y;
			return in;
		}
		ostream & operator << (ostream& out,point & p)
		{
			cout<<"x and y co-ordinate of point  ";
				out<<p.x<<"\t,"<<p.y;
			return out;
		}
int main()
{
	point p1;
	cin>>p1;
	cout<<p1;
	return 0;
}
