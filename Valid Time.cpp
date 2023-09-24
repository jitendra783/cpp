#include<iostream>
#include<string.h>
using namespace std;
class time
{
	int hr,min,sec;
	char ch[2];
	public:
		void read()
		{
			cout<<"Enter HH:MM:SS in 24 hr format"<<endl;
			cin>>hr>>min>>sec;
		}
		void write()
		{
			cout<<"the time you have entered is:"<<"\n"<<hr<<":"<<min<<":"<<sec;
		}
		void convert()
		{
		if((min>0 && min<60) && (hr>0 && hr<24) && (sec>0 && sec<60))
		{
			if(hr>=12)
		  strcpy(ch,"PM");
		  else
		  strcpy(ch,"AM");
		  if(hr==00)
		  hr=12;
		  if(hr>12)
		  hr=hr-12;
		  
		  cout<<"time after conversion"<<endl;
			cout<<hr<<":"<<min<<":"<<sec<<ch<<endl;
		}
		else
		{
			cout<<"\n\tWRONG TIME"<<endl;
		}
		}
		
};
int main()
{
	time t;
	t.read();
	t.write();
	t.convert();
	return 0;
}
