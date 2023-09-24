#include<iostream>
using namespace std;
class Weapons{
 
public:
	//pure virtual functions
	virtual void name() = 0;
	virtual void version() = 0;	
};
 
class Gun:public Weapon{
public:
 
	void name(){
		cout<<"Guns!!!!!";
	}	
	void version(){
		cout<<"1034";
	}	
	
};
class Rocket:public Weapon{
public:
 
	void name(){
		cout<<"Rocket!!!!!";
	}	
	void version(){
		cout<<"2624";
	}	
	
};
 
int main()
{
 Gun g;
 g.name();
 g.version();
 Rocket r;
 r.name();
 r.version();
 
 }
