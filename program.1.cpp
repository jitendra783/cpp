//1.Seat Matrix
#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>
struct branch
{	char b_name[10];
	int seat;
};
struct college
{	struct branch br[3];
	char c_name[10];
}c[4];
void create_seat_matrix()
{	int i;
	strcpy(c[0].c_name,"NITT");
	strcpy(c[1].c_name,"HCU");
	strcpy(c[2].c_name,"JNU");
	strcpy(c[3].c_name,"BHU");
	for(i=0;i<4;i++)
		strcpy(c[i].br[0].b_name,"MCA");
	for(i=0;i<4;i++)
		strcpy(c[i].br[1].b_name,"MTECH");
	for(i=0;i<4;i++)
		strcpy(c[i].br[2].b_name,"MSC");
	c[0].br[0].seat=5; c[0].br[1].seat=3; c[0].br[2].seat=3;
	c[1].br[0].seat=4; c[1].br[1].seat=3; c[1].br[2].seat=2;
	c[2].br[0].seat=4; c[2].br[1].seat=2; c[2].br[2].seat=0;
	c[3].br[0].seat=5; c[3].br[1].seat=0; c[3].br[2].seat=2;
}
void display_seat_matrix()
{   int i;
	printf("\n______SEAT-MATRIX   ________\n\n");
	printf("\tMCA  | MTECH  | MSC  \n");
	printf("\n- - - - - - - - - - - - - - -\n");
	printf("%s\t",c[0].c_name);
	for(i=0;i<3;i++)
		printf("%d\t",c[0].br[i].seat);
	printf("\n\n%s\t",c[1].c_name);
	for(i=0;i<3;i++)
		printf("%d\t",c[1].br[i].seat);
	printf("\n\n%s\t",c[2].c_name);
	for(i=0;i<3;i++)
		printf("%d\t",c[2].br[i].seat);
	printf("\n\n%s\t",c[3].c_name);
	for(i=0;i<3;i++)
		printf("%d\t",c[3].br[i].seat);
	printf("\n\n==============================\n\n");	
}
int Seat_Allocation()
{
	int n,i,j,k;
	printf("Enter the no. of preferences : ");
	scanf("%d",&n);
	char clg[n][10],b[n][10];
	printf("\nEnter College Name and Branch Name");
	for(i=0;i<n;i++)
	{	printf("\nEnter preference number %d :\n",i+1);
		scanf("%s%s",clg[i],b[i]);
	}
	for(i=0;i<n;i++)
	{	for(j=0;j<4;j++)
		{		if(!strcmp(clg[i],c[j].c_name))
				{	for(k=0;k<n;k++)
					{	if(!strcmp(b[i],c[j].br[k].b_name))
						{   if(c[j].br[k].seat>0)
							{   c[j].br[k].seat--;
						  		return 1;
							}
						}
					}
				}
			}
		}
	return 0;	
}
void menu()
{	printf("Enter your choice: \n");
	printf("1 for print Seat matrix.\n");
	printf("2 for Seat Allocation.\n");
	printf("3 for Exit\n");
	printf("\n\t");
}
int main()
{   
    create_seat_matrix();
	int ch,x;
	while(1)
	{	menu();
		scanf("%d",&ch);
		switch(ch)
		{	case 1: display_seat_matrix();   		break;
			case 2:		if(Seat_Allocation())
	 						 printf("\nCongratlation!!\nYou have Allocated Seat\n\n");
						else
							printf("\nSorry!!\nYou have not Allocated any seat\n\n");
						break;
			case 3: exit(0);
		}
	}
	return 0;
}
/* OUTPUT 
Enter your choice:
1 for print Seat matrix.
2 for Seat Allocation.
3 for Exit
        1
______SEAT-MATRIX   ________
		MCA  | MTECH  | MSC
- - - - - - - - - - - - - - -
NITT    5       3       3
HCU     4       3       2
JNU     4       2       0
BHU     5       0       2
==============================

Enter your choice:
1 for print Seat matrix.
2 for Seat Allocation.
3 for Exit
		2
Enter the no. of preferences : 2
Enter College Name and Branch Name
Enter preference number 1 :
NITT MCA
Enter preference number 2 :
HCU MSC

Congratlation!!
You have Allocated Seat

Enter your choice:
1 for print Seat matrix.
2 for Seat Allocation.
3 for Exit
	 1
______SEAT-MATRIX   ________
	     MCA  | MTECH  | MSC
- - - - - - - - - - - - - - -
NITT    4       3       3
HCU     4       3       2
JNU     4       2       0
BHU     5       0       2
==============================

Enter your choice:
1 for print Seat matrix.
2 for Seat Allocation.
3 for Exit
	3
-----------------------------------------------------------------------------------------------------
*/
