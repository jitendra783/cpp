//student registration
#include<iostream>
using namespace std;
class student
{
    char name[10];
	int rollno;
	int marks;
	public:
	  void read()
	  {
	  	 cout<<"enter the name of student\n";
	  	 cout<<"Enter the Roll No of student";
	  	 cin>>name;
	  	 cin>>rollno;
	  }	
	  void print()
	  {
	  	cout<<"the name of student is "<<name;
	  	cout<<"\n";
	  }
	  void set(int x)
	  {
	  	marks=x;
	  }
	  friend void show_marks(student &s)
	  {
	  	cout<<"\nMarks of studnet: ";
	  	cout<<s.marks;
	  }
};
int main()
{
	student s;
	s.read();
	s.print();
	s.set(200);
	
	show_marks(s);
	return 0;
}

