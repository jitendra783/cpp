//implementing stack
#include<iostream>
using namespace std;
class stac
{
	int arr[10];
	int top=-1;
	public:
		void push(int data)
		{
			if(top==9)
			{
			cout<<"\n stack is full";
			return;
			}
			else
			{
				top++;
				arr[top]=data;
			}
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"\n stack is empty";
				return;
			}
			else
			{
				cout<<arr[top];
				top--;
			}
		}
};
int main()
{
	int c,data;
	stac s1;
	do
	{
	cout<<"\n Menu ::\n1.push\n2.pop\n3.exit";
	cin>>c;
	switch(c)
	{
		case 1:
			cout<<"\nenter any integer  ";
			cin>>data;
			s1.push(data);
			break;
		case 2:
		s1.pop() ;
		break;
		case 3:
		exit(1);
		default:
		cout<<"\n you entered wrong option"; 
	}
	}while(1);
	return 0;
}
