#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
class Metadata             
{
   public:
	int videoid;
	char subject[20];
	char topic[20];
	int duration;
	char url[20];
	char date[20];						
	public :
		
		void read()
		{
		   cout<<"\nEnter videoid : \t";
		   cin>>videoid;
		   cout<<"\nEnter subject :  \t";
		   cin>>subject;
		   cout<<"\nEnter topic :  \t";
		   cin>>topic;
		   cout<<"\nEnter duration : \t ";     // reading the METADATa
		   cin>>duration;
		   cout<<"\nEnter date : \t ";
		    cin>>date;
		   cout<<"\nEnter url : \t ";
		   cin>>url;
		}
		
		void display()
		{
			cout<<endl;
			cout<<"video id is : \t "<<videoid<<endl;
			cout<<"subject is : \t "<<subject<<endl;
		    cout<<"topic is :  \t"<<topic<<endl;
	    	cout<<"duration is  \t: "<<duration<<endl;   // dISPLAYING THE metadat;
		    cout<<"date is : \t "<<date;
		    cout<<"\nurl is :  \t"<<url<<endl;
		}
		
};
class Phrasefile
{
   public:																// sYLLABUS READING
   char str[150];
   public: 
   void fileread()
   {
   	  cout<<"\n\nEnter the course syllabus separated by hypen-----"<<endl;    
   	  cin>>str;
   }
};

class Linklist
{
    private:
	int videoid;
	char subject[20];
	char topic[20];
	int duration;						// CREATING THE LINK LIST;
	char url[20];
	char date[20];
	Linklist *link;
    
	public:
   	Linklist * arrange(Linklist *start,	Phrasefile &p,Metadata m[],int n);
   	void displayArrange(Linklist *start);
	
};

Linklist * Linklist:: arrange(Linklist *start,	Phrasefile &p,	Metadata m[],int n)
{
	char tp[10],ch;
	int i=0,j,k=0;
	while(p.str[k]!='\0')
	{
		if(p.str[k]!='-')
		{
		
		  tp[i++]=p.str[k];
	    }
		else
		{
		  	tp[i]='\0';								// aRRANGING ALL THE DATA;
		  	for(j=0;j<n;j++)
		  	{
		  		
		  		if((strcmp(tp,m[j].topic))==0)
		  		{
		  	
		  			Linklist *newnode,*temp;
		  			newnode=(Linklist*)malloc(sizeof(Linklist ));
		  			if(newnode==NULL)
		  			{
		  				cout<<"\nError in memory";
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
{
	if(start==NULL)
	{
		cout<<"\nLIST IS EMPTY";
	    return;
	}
	Linklist *temp=NULL;
	temp=start;																	// DISPLAYING THE ARRANGED DATA;
	
	do
	{
		int sec=temp->duration;
		while((sec--)>0)
		{
		system("cls");
		cout<<"\nVIDEOID:"<<temp->videoid<<"\n\nSUBJECT:"<<temp->subject<<"\n\nTOPIC:"<<temp->topic;
		cout<<"\n\nDate :"<<temp->date;
		cout<<"\n\nDuration :"<<temp->duration<<"\n\nURL: "<<temp->url;
	    cout<<"\n\nTime Left is "<<sec<<" Seconds";
		Sleep(1000);
	    }
	    temp=temp->link;
	    cout<<"\n*************************************************************************";
	}while(temp!=NULL);
	
}
int main()
{
	Linklist s;   // object of link list
	Phrasefile p;  // object of File class
	int i,n;
	cout<<"\n\tHow Many Video YOU Have :: \t";
	cin>>n;
	Metadata m[n];   // How Many Video You have that Much object creat of  File Metadata;
	for(i=0;i<n;i++)
	{
	   m[i].read();               // reading the data
	   system("cls");
    }
    cout<<"\n \tvideo Metadata is  :: \t\n";
    for(i=0;i<n;i++)
	{
	   m[i].display();            // for displaying the All the Metadata that we taken from the user;
	   cout<<"*****************************************************************************";

    }
	p.fileread();         // Now here we reading the Syllabus of Subject;
	Linklist *start=NULL;	// link list use for creating a sequence of video 
	start=s.arrange(start,p,m,n);  // making sequence of topics
	s.displayArrange(start);  // displaying the video in a systematic manner;
	
}

