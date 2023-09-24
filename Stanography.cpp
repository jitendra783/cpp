/*  3 program to Write a program for implementing stagnography by using 
  Image and Text class and also one stagnography() friend function.  */
  
  /* you have to  give the character to the each image and after that
   you have to select an image which u want to convert into text*/
   
  #include<iostream>
  #include<string.h>

 using namespace std;
 class text;
 class image
  {
  	
    int arr[6][5];
	
	 public: 
	        image()
	        {
	        	int i,j;
				arr[6][5]={0};
				for(i=0;i<6;i++)
				for(j=0;j<5;j++)
				{ 
				 arr[i][j]=0;
				//cout<<" "<<arr[i][j];
			}
			}
			
			friend void stano(image,text);
  };
  
   class text
   {
   	   char ch[6][5];
	   public :
		
		 void getdata()
		 {
		 	 int i,j;
		 	 cout<<"Eenter any 30 character for image :";
		 	for(i=0;i<6;i++)
		 	 for(j=0;j<5;j++)
		    {		 		 
		        cin>>ch[i][j];
			}
		  } 
   	        
   	     friend void stano(image,text);
   };
   
    void stano(image i1,text t1)
    {
    	char str[20];
		int i,j,k=0;
		int n,go;
    	int temp;
    	     cout<<"how many images want to convert :";
    	     cin>>n;
    	     cout<<"selecting the image which has a particular meaning :--\n by entering i and j ";
    	     for(go=0;go<n;go++)
    	   {
		    cin>>i>>j;
    	    if(i1.arr[i][j]==0);
           {
           	 str[k]=t1.ch[i][j];
		    
			 k++;
		   }
	    } 
	        cout<<"text from the image : "<<str;
	    }
    int main()
    {
    	 image i1;
    	 text t1;
    	 t1.getdata();
    	 stano(i1,t1);
    	 
		  return 0;    	 
   	}
