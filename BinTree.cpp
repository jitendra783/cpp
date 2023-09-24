#include<iostream>
using namespace std;
#include<string.h>
class Table
{
	int num;
	char name[20];
	int condi;
	char dec;
	public:
		 void get_data()
		 {
		 	cout<<"\n attribute id:";
		 	cin>>num;
		 	cout<<"\n attribute name:";
		 	cin>>name;
		 	cout<<"\n attribute condition:";
		 	cin>>condi;
		 	cout<<"\n attribute decision:";
		 	cin>>dec;
		 }
};
class Bin_Tree
{
	char att[20];
	Bin_Tree *left;
	Bin_Tree *right;
	public:
		 int c;
		 Bin_Tree *insinleft(Bin_Tree *root,char str[20])
		 {  if(root==NULL)
		{
           	Bin_Tree *temp=new(Bin_Tree);
			strcpy(temp->att,str);
			temp->left=NULL;
			temp->right=NULL;
		         return root;
		 			
		}
		else
		root->left=insinleft(root->left,str);
		  	 }
		 Bin_Tree *insinright(Bin_Tree *root,char str[20])
		 {
		 	if(root==NULL)
		 	{
		 			Bin_Tree *temp=new(Bin_Tree);
			strcpy(temp->att,str);
			temp->left=NULL;
			temp->right=NULL;
		 return root;
			 }
			 else
			 	root->right=insinright(root->right,str);
		 }
		 
		Bin_Tree *get_attribute(Bin_Tree *root,char str[20])
		{
			Bin_Tree *temp=new(Bin_Tree);
			strcpy(temp->att,str);
			temp->left=NULL;
			temp->right=NULL;
			if(root==NULL)
			{
				root=temp;
				//cout<<"\ninserted as root!!";
		      // cout<<c;
		       return temp;
			}
			else if(root->left==NULL)
			{
			   	root->left=temp;
				cout<<"inserted in root's left!!";
				return root;
			}
			else if(root->right==NULL)
			{
				root->right=temp;
				cout<<"inserted in root's right!!";
		       return root;
			}
			else
			{int ch;
				cout<<"\n1.left node";
				cout<<"\n2.right node";
				cout<<"\n enter ch:";
				cin>>ch;
				switch(ch)
				{
					case 1:insinleft(root,str);
					cout<<"\ninserted in left!!";
					break;
					case 2:insinright(root,str);
				  cout<<"\n inserted in right!!";
				}
				return root;
			}
		}
		
		void inorder(Bin_Tree *root)
		{
			if(root==NULL)
			return;
			inorder(root->left);
			cout<<root->att<<" ";
			inorder(root->right);
		}
};
//int Bin_Tree::c=0;
int main()
{
	int ch;
	char att[20];
	Bin_Tree *root=NULL,b;
	cout<<"1.insert an attribute\n";
	cout<<"2.inorder traversal\n";
	
	while(1)
	{
	cout<<"\nenter choice:";
    cin>>ch;
    switch(ch)
    {
    	case 1:cout<<"\nenter the attribute:";
    	       cin>>att;
    	    root=b.get_attribute(root,att);
    	    //cout<<root;
    	    break;
    	case 2:b.inorder(root);
   	}
	}
}
