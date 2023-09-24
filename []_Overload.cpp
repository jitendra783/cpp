//overloading of square bracket[]
#include<iostream>
# define l 10
using namespace std;
class safearray
{
	int a[l];
	public:
		int & operator[](int x)
		{
			if(x<0 || x>l)
			{
				cout<<"out of boundry";
				exit(1);
			}
			return a[x];
		}
		void print()
		{
			for(int i=0;i<l;i++)
			cout<<a[i]<<"\n";
		}
};
int main()
{
	safearray s;
	for(int i=0;i<l;i++)
	{
		s.operator[](i)==i*10; 
	}
	s.print();
	return 0;
}
