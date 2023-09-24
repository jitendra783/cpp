//------------------distance between two cities by passing object from------------

/* Write a program to input distance between two cities   namely A to B and B to C and then 
calculate the distance between A to C and also a function to add the distance of the two given
 distances using reference of objects.*/
 

#include<iostream>
#include<string.h>
#include<math.h>

 using namespace std;
 
  class diss
  {
  	float dis_a_b,dis_b_c;
  	float result1,result2,sum;
  	
  	public: 
  	         diss()
  	         {
  	         	dis_a_b = 0;
				dis_b_c = 0;
				result1=0;
				result2=0;
				sum=0;
			   }
  	          
		    void read(float a,float b)
  	         {
				dis_a_b = a;
				dis_b_c = b;
				 cout<<"distance between a to b:"<<dis_a_b;
				cout<<"\ndistance between b to c "<<dis_b_c<<endl;
			  }
			   
		      diss calculate(diss &d1)
		     {
		     	//cout<<"d1 "<<d1.dis_a_b<<"d2 "<<d1.dis_b_c;
		       	
		       result1=d1.dis_a_b+d1.dis_b_c;
		       
		       result2=pow(d1.dis_a_b,2)+pow(d1.dis_b_c,2);
		       result2=sqrt(result2);
		         
			  }
			  
			diss add(diss &d1)
			{ 
				 sum=d1.dis_a_b+d1.dis_b_c;
			 } 
			  
	    
		 void show()
		   {
	         cout<<"distance between a to c :\n if all are in linear :"<<result1;
			 cout<<"\n if all three makes an right angle triange :"<<result2 ;
		     cout<<"\nsum : "<<sum;
		
			}
   
    };
    
      int main()
      {
	    diss d,d2;
	    d.read(16.00,25.0);
	    d2.calculate(d);
	    d2.add(d);
	    d2.show();
	  }
		     
		     
