#include<iostream>
#include<string.h>

using namespace std;

 class memory
 {
 	int size;
 	char type[10];
 	
 	public:
 		    void getdata()
 		    {
 		      cout<<"type of content and size of content in mb :";
			  cin>>type>>size;
			  	
 		    }
 		    
 		    
 		static void sort(memory *m1,int n)
 		{
 			memory temp;
 			int i,j;
 			
 			for(i=0;i<n;i++)
 			{
 				for(j=0;j<n;j++)
 				{
 					if(m1[i].compare(m1[j])==1)
 					{
 						temp=m1[i];
 						m1[i]=m1[j];
 						m1[j]=temp;
					 }
				 }
			 }
 			
		 }	        
 	
 	 bool compare(memory m1)
 	 {
 	 	if(size<m1.size)
 	 	return 1;
 	 	else
 	 	return 0;
 	}
 	
 	void show()
 	{
 		
 		
 		cout<<size<<"\t";
	 }
 	
 };
 
 
  int main()
  {
  	 int n,i;
  	 cout<<"enter the elements: ";
  	 cin>>n;
  	memory *m;
  	m=new memory[n];
  	
  	for(i=0;i<n;i++)
  	 m[i].getdata();
  	 
  	   memory::sort(m,n);
  	 
  	  cout<<"memory sorted ---";
  	  for(i=0;i<n;i++)
  	  m[i].show();
  	
  	 return 0;
  	
  	
  }

