//student registration
#include<iostream>
using namespace std;
class studentreg
{
    char name[10];
	int rollno;
	static int count;
	public:
	  void read()
	  {
	  	 cout<<"enter the name of student\n";
	  	 cin>>name;
	  }	
	  void print()
	  {
	  	cout<<"the name of student is "<<name;
	  	cout<<"\n";
	  }
	  studentreg()
	  {
	  	count++;
	  	rollno=count+1000;
	  }
	  void roll()
	  {
	  	cout<<"the roll no of student is "<<rollno;
	  	cout<<"\n";
	  }
};
int studentreg::count=0;
int main()
{
	studentreg s[10];
	int n;
	cout<<"enter the no of students";
	cout<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s[i].read();
		s[i].print();
		s[i].roll();
	}
	return 0;
}

