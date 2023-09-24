#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
class Metadata             
{	public:
	int videoid;
	char subject[20];
	char topic[20];
	int duration;
	char url[20];
	char date[20];						
	public :
		void read()
		{	cout<<"\nEnter videoid : \t";
		   	cin>>videoid;
		   	cout<<"\nEnter subject :  \t";
		   	cin>>subject;
		   	cout<<"\nEnter topic :  \t";
		   	cin>>topic;
		   	cout<<"\nEnter duration : \t ";    
		   	cin>>duration;
		   	cout<<"\nEnter date : \t ";
		    cin>>date;
		   	cout<<"\nEnter url : \t ";
		   	cin>>url;
		}
		void display()
		{	cout<<endl;
			cout<<"video id is : \t "<<videoid<<endl;
			cout<<"subject is : \t "<<subject<<endl;
		    cout<<"topic is :  \t"<<topic<<endl;
	    	cout<<"duration is  \t: "<<duration<<endl;   
		    cout<<"date is : \t "<<date;
		    cout<<"\nurl is :  \t"<<url<<endl;
		}
};
class Phrasefile
{	public:															
   	char str[150];
   	public: 
   	void fileread()
  	{	cout<<"\n\nEnter the course syllabus separated by hypen-----"<<endl;    
   	  	cin>>str;
	}
};
class Linklist
{	private:
	int videoid;
	char subject[20];
	char topic[20];
	int duration;				
	char url[20];
	char date[20];
	Linklist *link;
    public:
   	Linklist * arrange(Linklist *start,	Phrasefile &p,Metadata m[],int n);
   	void displayArrange(Linklist *start);
};
Linklist * Linklist:: arrange(Linklist *start,	Phrasefile &p,	Metadata m[],int n)
{	char tp[10],ch;
	int i=0,j,k=0;
	while(p.str[k]!='\0')
	{	if(p.str[k]!='-')
		{	tp[i++]=p.str[k];
	    }
		else
		{	tp[i]='\0';							
		  	for(j=0;j<n;j++)
		  	{	if((strcmp(tp,m[j].topic))==0)
		  		{	Linklist *newnode,*temp;
		  			newnode=(Linklist*)malloc(sizeof(Linklist ));
		  			if(newnode==NULL)
		  			{	cout<<"\nError in memory";
		  				exit(1);
					}
				    newnode->videoid=m[j].videoid;
				    newnode->duration=m[j].duration;
				    strcpy(newnode->date,m[j].date);
				    strcpy(newnode->topic,m[j].topic);
				    strcpy(newnode->subject,m[j].subject);
					strcpy(newnode->url,m[j].url);
				    newnode->link=NULL;
				    if(start==NULL)
				      start=newnode;
				    else
				       temp->link=newnode;
				    temp=newnode;
				}
			}
		   i=0; 
		}
		k++;  
	}
	return start;
}
void Linklist:: displayArrange(Linklist *start)
{	if(start==NULL)
	{	cout<<"\nLIST IS EMPTY";
	    return;
	}
	Linklist *temp=NULL;
	temp=start;																
	do
	{int sec=temp->duration;
	while((sec--)>0)
	{system("cls");
	cout<<"\nVIDEOID:"<<temp->videoid<<"\n\nSUBJECT:"<<temp->subject<<"\n\nTOPIC:"<<temp->topic;
	cout<<"\n\nDate :"<<temp->date;
	cout<<"\n\nDuration :"<<temp->duration<<"\n\nURL: "<<temp->url;
	cout<<"\n\nTime Left is "<<sec<<" Seconds";
	Sleep(1000);
	}
	temp=temp->link;
	cout<<"\n********************************************";
	}while(temp!=NULL);
}
int main()
{
	Linklist s;   
	Phrasefile p; 
	int i,n;
	cout<<"\n\tHow Many Video YOU Have :: \t";
	cin>>n;
	Metadata m[n];  
	for(i=0;i<n;i++)
	{	m[i].read();             
	   	system("cls");
    }
    cout<<"\n \tvideo Metadata is  :: \t\n";
    for(i=0;i<n;i++)
	{	m[i].display();          
	   	cout<<"******************************************";
	}
	p.fileread();         
	Linklist *start=NULL;
	start=s.arrange(start,p,m,n);  
	s.displayArrange(start);  
}
/*
  How Many Video YOU Have ::      2

Enter videoid :         101
Enter subject :         DS
Enter topic :   stack
Enter duration :         2
Enter date :     14-04-2018
Enter url :      http//stack


Enter videoid :         102
Enter subject :         DBMS
Enter topic :   plsql
Enter duration :         2
Enter date :     15-04-2018
Enter url :      http/plsql

		video Metadata is  ::

video id is :    101
subject is :     DS
topic is :      stack
duration is     : 2
date is :        14-04-2018
url is :        http//stack
******************************************
video id is :    102
subject is :     DBMS
topic is :      plsql
duration is     : 2
date is :        15-04-2018
url is :        http/plsql
******************************************

Enter the course syllabus separated by hypen-----
stack-queue-

Enter videoid :         101
Enter subject :         DS
Enter topic :   stack
Enter duration :         2
Enter date :     14-04-2018
Enter url :      http/stack

Enter videoid :         102
Enter subject :         DBMS
Enter topic :   plsql
Enter duration :         2
Enter date :     15-04-2018
Enter url :      http/plsql
 -----------------------------------------------------------
 */

