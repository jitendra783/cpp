//matrix addition and subtraction using binary operator overloading
#include<iostream>
using namespace std;
class matrix
{
	int r,c;
	int m[3][3];
	public:
		matrix()
		{
			r=0;
			c=0;
		}
		matrix(int x,int y)
		{
			r=x;
			c=y;
		}
		void read()
		{
			cout<<"\nenter data    __________";
			for(int i=0;i<r;i++)
				for(int j=0;j<c;j++)
				cin>>m[i][j];
		}
		void print()
		{
			for(int i=0;i<r;i++)
			{
				cout<<"\n";
				for(int j=0;j<c;j++)
				cout<<m[i][j]<<"   ";
			}
			cout<<"\n\n";
		}
		matrix operator -(matrix m2)
		{
			matrix* t=new matrix;
				for(int i=0;i<r;i++)
				for(int j=0;j<c;j++)
				t->m[i][j]=m[i][j]-m2.m[i][j];
				return *t;
		}
};
int main()
{
	matrix m1(3,3),m2(3,3),m3(3,3);
	m1.read() ;
	m2.read() ;
	m3=m1.operator -(m2); 
	m1.print() ;
	m2.print() ;
	m3.print() ;
	return 0; 
}
