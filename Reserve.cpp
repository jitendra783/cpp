//seat booking system
#include<iostream>
#include<string.h>
using namespace std;
class train
{
	int train_no;
	char name[30];
	char source[30];
	char dest[30];
	int no_of_seat;
	int seat_matrix[30][6];
	public:
		train()
		{
			no_of_seat=180;
			for(int i=0;i<30;i++)
			{
				for(int j=0;j<6;j++)
				seat_matrix[i][j]=0;
			}
		}
		void read()
		{
			cout<<"\n enter train number   ";
			cin>>train_no;
			cout<<"\n enter train name   ";
			cin>>name;
			cout<<"\n enter source   ";
			cin>>source;
			cout<<"\n enter destination  ";
			cin>>dest;
			cout<<"\n enter number of seats u want to reserve   ";
			cin>>no_of_seat;
		}
		void print()
		{
			cout<<"\ntrain number="<<train_no<<"\tname="<<name;
			cout<<"\nsource="<<source<<"\tdestination="<<dest;
			cout<<"\n number of seats=="<<no_of_seat;
			for(int i=0;i<30;i++)
			{
				printf("\n");
				for(int j=0;j<6;j++)
				cout<<seat_matrix[i][j]<<"\t";
			}
		}
		/*void book_ticket(booking_form &b1)
		{
			if(train_no==b1.train_no)
			if((strcmp(source,b1.source)==0) &&(strcmp(dest,b1.dest)==0))
			if(b1.count()<=6)
			{
				no_of_seat-=b1.count();
				
			}*/
		friend class booking_form;
};
class booking_form
{
	int train_no;
	char source[30];
	char dest[30];
	char passenger[6][15];
	char pref[6][2];
	public:
		void read()
		{
			cout<<"\n enter train number   ";
			cin>>train_no;
			cout<<"\n enter source   ";
			cin>>source;
			cout<<"\n enter destination  ";
			cin>>dest;
			for(int a=0;a<6;a++)
			{
				cout<<"\n enter name of passenger "<<a+1<<"  ";
				cin>>passenger[a];
				cout<<"\n enter preference  ";
				cin>>pref[a];
			}
		}
			void print()
		{
			cout<<"\ntrain number="<<train_no;
			cout<<"\nsource="<<source<<"\t\tdestination="<<dest;
			cout<<"\npassenger"<<"\t\t preference"<<"\n\n";
			for(int i=0;i<6;i++)
			{
			cout<<"\n\n"<<passenger[i];
			cout<<"\t\t"<<pref[i];
			}	
		}
		/*int count()
		{
			//returns no. of persons
		}*/
};
int main()
{
	//train t1;
	//t1.read() ;
	booking_form b1;
	b1.read() ;
	//t1.book_ticket(b1);
	b1.print();
	//t1.print();
	return 0; 
}
