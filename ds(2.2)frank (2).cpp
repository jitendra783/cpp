#include<bits/stdc++.h>
using namespace std;
int pop(int top,string str)
{
	if(top<=0)
	{
		cout<<"not possible"<<endl;
		return top;
	}
	else
	{
		top--;
		for(int i=0;i<top;i++)
		cout<<str[i];
		cout<<endl;
		return top;
	}

}
int push(int top,string str)
{
	if(top>=
	str.length()-1)
	{
		cout<<"not possible"<<endl;
		return top;
	}
	else
	{
		top++;
		for(int i=0;i<top;i++)
		cout<<str[i];
		cout<<endl;
		return top;
	}

}

int main()
{
	FILE *fp;
	string str;
	int u=0;
	fp=fopen("y.dat","wb");
	cout<<"\n\tProgram for Undo Redo operation on a Word: \n";
	cout<<"\tenter the word:\n\t";
	char ch;
	while((ch=getchar())!=EOF)
	{
		fputc(ch,fp);
		if(ch==' ')
			break;
	}
	fclose(fp);
	fp=fopen("y.dat","rb");
	while((ch=fgetc(fp))!=EOF)
	{
		str=str+ch;
		u++;
	}
	
	cout<<str;
	int n=str.length();
	int top=n-1;
		int x;
	do
	{
		cout<<"\n\tenter 1 for undo"<<endl;
		cout<<"\tenter 2 for redo"<<endl;
		cout<<"\tenter 3 for nothing"<<endl;
		cout<<"\tenter 4 for exit()"<<endl<<"\t";
	
		cin>>x;
		switch(x)
		{
			case 1:
				{
					top=pop(top,str);
					break;
				}
				case 2:
				{
					top=push(top,str);
					break;
				}
				case 3:
				{
				cout<<str;
					break;
				}
				case 4:
				{
				
					break;
				}
		}
	}while(x!=4);
}

