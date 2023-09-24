
#include<conio.h>
#define SIZE 100
#include<iostream>
using namespace std;

// Stack class definition
class STK
{
	
	
	
	
	int T1, stk1[SIZE];
	public:
	STK(); // STACK constructor
	~STK(); // Stack destructor
	void PUSH(int a);
	int POP();
	
	
	
};


// Stack constructor method

STK::STK()
{

	T1=0;
	cout<<"Stack Begins.\n";

}

// Stack Destructor method

STK::~STK()
{
	
	cout<<"Stack is destroying \n";

}

void STK::PUSH(int a)
{
	
	if(T1==SIZE)
	{
		cout<<"Stack is Full";
		return;
	}
	stk1[T1]=a;
	T1++;

}

int STK::POP()
{
	
	if(T1==0)
	{
		cout<<"This Stack is Underflow.\n";	
		return 0;
	}
	T1--;
	return stk1[T1];

}

int main()
{
	
	
	STK x, y; // It creates TWO stack objects	
	x.PUSH(1);
	y.PUSH(2);
	x.PUSH(3);
	y.PUSH(4);
	cout<<x.POP()<<" ";
	cout<<x.POP()<<" ";
	cout<<y.POP()<<" ";	
	cout<<y.POP()<<"\n";
	getch();
	return 0;
	
}
