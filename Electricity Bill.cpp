/*2   Write a program to generate electicity bill for the customers,
 displaying the total amount by using the concept of constant objects.*/
 
#include<iostream>
#include<string.h>
using namespace std;
class elect
{
    char name[20];
    mutable char add[20];    //mutable keyword...
    int bill_no;
    float reding,c_read;
    float amount;
    int d,m,y;
    public:
		    elect(char na[],char ad[])
		   {
		      cout<<"\n\n";
			  m=5;
		      d=12;
		      y=2008;
		     cout<<d<<":"<<m<<":"<<y;
		     bill_no=10001;
			 cout<<"\nbill_no :"<<bill_no;
		   	 reding=8.0;
		   	  strcpy(name,na);
		   	  cout<<"\nname :"<<name;
		   	 
		     strcpy(add,ad);
		   	 cout<<"\naddress :"<<add;
		   	  
		   	 amount=0.0;	 
		   }
		  void calculate() 
		  {
		    cout<<"consumed reading : ";
		    cin>>c_read;
		    amount = c_read*reding;
		    cout<<"amount you have to pay : "<<amount;
		 }
		 
		void change(char ad[]) const      // here const grant the permision to access the variable which is mutable
		 {
		   strcpy(add,ad);
		   cout<<" \nupdated address :"<<add;
		 }
 };
int main()
{
   	 elect e1("rahul","bhopal");
   	 e1.calculate();
   	 const elect e2("raj","shyamla");                                 
	 e2.calculate();                   // we are not able to access this function ....
   	 e2.change("rajharsh");       
     return 0;
   	
   }
