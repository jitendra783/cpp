/* Program for resize the image*/
#include<iostream>
using namespace std;
class image
{
	char name[30];
	int size,x,y;
	public:
		void read()
		{
			cout<<"\n\tEnter name of the image  : ";
			cin>>name;
			cout<<"\tEnter the size of the image in kb : ";
			cin>>size;
			cout<<"\tEnter the dimension(x and y) of the image : ";
			cin>>x>>y;
			
		}
		void disp()
		{
			cout<<"\n--------------------------------------------------\n";
			cout<<"Name : "<<name<<endl;
			cout<<"Size : "<<size<<"KB"<<endl;
			cout<<"Dimension x = "<<x<<"\ty = "<<y<<endl;
			cout<<"\n--------------------------------------------------\n";
		}
		void increase()
		{
			size+=20;
			x+=4;
			y+=4;
		}
};
int main()
{
	image i;
	i.read();
	cout<<"\n\tOld Details of Image"<<endl;
	i.disp();
	i.increase();
	cout<<"\n\tAfter Resize the details of image: "<<endl;
	i.disp();
	return 0;
}
