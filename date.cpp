#include<iostream>
using namespace std;
class date
{
	int d,m,y;
	public:
		void read()
		{
			cout<<"enter date :  ";
			cin>>d>>m>>y;
		}
		bool validate()
		{
			if((d>31)||(m>12))
			return 0;
			else
			return 1;
		}
};
int main()
{
	date d1;
	d1.read() ;
	bool c=d1.validate() ;
	if(c==1)
	cout<<"date is valid";
	else
	cout<<"date is invalid";
	return 0;
}
