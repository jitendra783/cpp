  
  /*  4. Write a program to implement Document class
   which will perform the functions as a word document consists of */
   
   /* it will perform two functions.....1 to conert the first charcter from lower case to upper
                                        2. to count the words in a particular sentance*/
                                        
   

 #include<iostream>
 #include<string.h>

 using namespace std;
 int p=1;
 
 class word
 
  {
 	char str[500];
 	int count;
 	
 	public: 
 	
 	       void getdata()
 	       {
 	       	 gets(str);
 	       	 
 	       }
  	      
  	      
			void upper()
  	      {
  	      	 int i=0,j=0;
  	      	  char temp[200];
  	      	  if(str[0]>91 && str[0]<122)
  	      	      str[0]=str[0]-32;
  	      	   
  	      	   while(str[j]!='\0')
			{
					
				if(str[j]==' '||str[j]=='.')
				{   
				   j++;
				    if(str[j]>=90 && str[j]<=122)
				      str[j]=str[j]-32;
				   p++;
			     }
				  
			   	j++;
			 } 
			cout<<str;
			 //cal();
       	}
	    void cal()
	    {
	    	cout<<"\ntotal words in the string : "<<p;
		}
    };
    	
    	 int main()
    	{
    	   word w1;
    	   w1.getdata();
    	   w1.upper();        //for first character upper...
    	   w1.cal();    	   //word calculate...
    	}
		
		
		
			
