#include<iostream>
using namespace std;
#include<fstream>
class Document
{
	char ch;
	public:
		void read_doc()
		{
			ifstream in("doc.txt",ios::in | ios::binary);
			if(!in)
			{
			cout<<"file not found";
			exit(1);
					}
        while(in) {
        in.get(ch);
		 if(in) cout << ch; }
		}
		void write_doc()
		{
			ifstream in("doc.txt",ios::in | ios::binary);
			ofstream out("doc2.txt",ios::out | ios::binary);
			if(!in)
			{
			cout<<"file not found";
			exit(1);
		}
			if(!out)
			{
			cout<<"file not found";
			exit(1);
		}
        
        while(in) {
        in.get(ch);
        out.put(ch);
        out.close();
		 //if(in) cout << ch; 
		 }
		}
		void encrypt_doc()
		{
			ifstream in("doc.txt",ios::in | ios::binary);
			if(!in)
			{
			cout<<"file not found";
			exit(1);
					}
        while(in) {
        in.get(ch);
        ch=ch+10;
		 if(in) cout << ch; }
		}
		
};
int main()
{
	Document d;
	d.read_doc();
	d.write_doc();
	d.encrypt_doc();
}
