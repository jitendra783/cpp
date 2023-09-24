#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

class image
{
	char name[10];
	int size;
	int d,m,y;
	public:
		void read()
		{
			cout<<"enter the details of image\n";
			cout<<"enter the size and name of image\n";
			cin>>size>>name;
			cout<<"enter the date when image is clicked in day month year form:";
			cin>>d>>m>>y;
		}
		void resize()
		{
			size*=(1056);
			cout<<"image is resized as:"<<size;
		}
		void print()
		{
			cout<<"\nnew details are:"<<"\nname:"<<name<<"\nsize:"<<size<<"\ndate:"<<d<<"/"<<m<<"/"<<y;
		}

};
int main()
{
	image i;
	i.read();
	i.resize();
	i.print();
	return 0;
}
