//sEAT bOOKING sYSTEM
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
			cout<<"\n ENTER TRAIN NUMBER :   ";
			cin>>train_no;
			cout<<"\n ENTRE TRAIN NAME   ";
			cin>>name;
			cout<<"\n ENTER SOURCE   ";
			cin>>source;
			cout<<"\n ENTER DESTINATION  ";
			cin>>dest;
			cout<<"\n ENTER NUMBER OF SEATS YOU WANTS TO RESERVE";
			cin>>no_of_seat;
		}
		void print()
		{
			cout<<"\nTRAIN NUMBER="<<train_no<<"\tNAME="<<name;
			cout<<"\nSOURCE="<<source<<"\tDESTINATION="<<dest;
			cout<<"\n NUMBER OF SEATS=="<<no_of_seat;
			for(int i=0;i<30;i++)
			{
				printf("\n");
				for(int j=0;j<6;j++)
				cout<<seat_matrix[i][j]<<"\t";
			}
		}
		
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
			cout<<"\n ENTER TRAIN NUMBER   ";
			cin>>train_no;
			cout<<"\n ENTER SOURCE   ";
			cin>>source;
			cout<<"\n ENTER DESTINATION  ";
			cin>>dest;
			for(int a=0;a<6;a++)
			{
				cout<<"\n ENTER NAME OF PASSENGER "<<a+1<<"  ";
				cin>>passenger[a];
				cout<<"\n ENTRE PREFRENCE  ";
				cin>>pref[a];
			}
		}
			void print()
		{
			cout<<"\nTRAIN NO.="<<train_no;
			cout<<"\nSOURCE="<<source<<"\t\tDESTINATION="<<dest;
			cout<<"\nPASSENGER"<<"\t\tPREFRENCE"<<"\n\n";
			for(int i=0;i<6;i++)
			{
			cout<<"\n\n"<<passenger[i];
			cout<<"\t\t"<<pref[i];
			}	
		}
		
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
