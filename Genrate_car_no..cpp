/*---------------------------------------------------------------------
Generating the car number using the information of car
*/

#include <iostream>
using namespace std;
class Car
{
	private:
		char region[30];
		int modelNo;
		int registrationNo;
		char ownerName[30];
		int age;
		
	public:
		void setInfo();
		void getInfo();
		char * carNo();
};

//function defination

void Car::setInfo()
{
	cout<<"Enter the car information\n";
	cout<<"Region: ";
	cin>>region;
	cout<<"Model number: ";
	cin>>modelNo;
	cout<<"Registration number : ";
	cin>>registrationNo;
	cout<<"Owner Name: ";
	cin>>ownerName;
	cout<<"Age: ";
	cin>>age;
}

//function will give the information

void Car::getInfo()
{
	cout<<"Region: "<<region<<endl;
	cout<<"Model number: "<<modelNo<<endl;
	cout<<"Registration number : "<<registrationNo<<endl;
	cout<<"Owner Name: "<<ownerName<<endl;
	cout<<"Age: "<<age<<endl;
}

//function will generate the car no

char * Car::carNo()
{
	char * no;
	no= new char[10];
	no[0]=region[0];
	no[1]=region[1];
	no[2]=modelNo%10;
	no[3]=registrationNo%10;
	no[4]= ownerName[0];
	no[5]=ownerName[1];
	return 0;
}

//Main() function defination

int main()
{
	Car c;
	char *plateNo;
	
	plateNo= new char[20];
	c.setInfo();
	plateNo= c.carNo();
	c.getInfo();
	cout<<"Your plate number is: "<<plateNo;
	return 0;
}
