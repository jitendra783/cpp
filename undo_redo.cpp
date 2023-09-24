//redo and undo
#include<iostream>
#include<string.h>
using namespace std;
class Stack
{
	char stack[50];
	int top;
	public:
		Stack()
		{
			top=-1;
		}
		
	void push(char x)
	{
		stack[++top]=x;
	}
	char pop()
	{
		if(top==-1)
		return '0';
		return stack[top--];
	}
};
class UndoRedo
{
	int top,length,flag;
	char str[50],temp;
	Stack s;
	public:
	UndoRedo()
	{
		flag=0;
	}	
	void read()
	{
		cout<<"Enter a String:";
		cin>>str;
	}
	void delete_char()
	{
		length=strlen(str);
		if(length>0)
		{
			s.push(str[length-1]);
			str[--length]='\0';
		}
		else
		cout<<"No characters exist in string:\n";
	}
	void display()
	{
		cout<<"Your String is: "<<str<<endl;
	}
	void undo()
	{
		temp=s.pop();
		if(temp=='0')
		printf("\n\nNot Applicable!!!!\n\n");
		else
		{
		flag++;
		length=strlen(str);
		
		str[length]=temp;
		str[++length]='\0';
		}
	}
	void redo()
	{
		if(flag==0)
			printf("\n\nNot Applicable!!!!\n\n");
		else
		{
			delete_char();	
			flag--;
		}
	}
};
int main()
{
	UndoRedo a;
	a.read();
	int ch;
	while(1)
	{
		cout<<"\n1.Backspace\n";
		cout<<"2.Undo\n";
		cout<<"3.Redo\n";
		cout<<"4.exit";
		cout<<"\nEnter your choice\n\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				a.delete_char();
				a.display();
				break;
			case 2:
				a.undo();
				a.display();
				break;
			case 3:
				a.redo();
				a.display();
				break;
			default :
			exit(1);	
		}
		
	}
}
