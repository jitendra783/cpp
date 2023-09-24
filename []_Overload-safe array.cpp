//overloading of square bracket[]
#include<iostream>
# define c 10
using namespace std;
class safearray
{
	int a[c];
	public:
		int & operator[](int x)
		{
			if(x<0 || x>c)
			{
				cout<<"\n\t*** OUT OF BOUNDRY ***";
				exit(1);
			}
			return a[x];
		}
		void print()
		{
			for(int i=0;i<c;i++)
			cout<<a[i]<<endl;
		}
};
int main()
{
	safearray s;
	for(int i=0;i<c;i++)
	{
		s.operator[](i)==i*20; 
	}
	s.print();
	return 0;
}
