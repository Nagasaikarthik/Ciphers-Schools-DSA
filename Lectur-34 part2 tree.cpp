#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *left;
		Node *right;
		
		//note : since each node has the address ti the node corresponding to the root,we are able to 
		//access the linked list ;
		

{
	Node(int data)
	this->data=data;
	this->left=NULL;
	this->right=NULL;
     }
};
		
void buildTree(Node *root)

{
	//this is the start of the creation of binary tree 
	int var;
	
	cout<<"Enter the value which you want to present at the root node";
	cin>>var;
	
	//the user inputs -1 ie their is no node present in over there 
	if(var== -1) return;

root = new Node(var);
cout<<"now enter the data which you want to be to the left"<<var<<" ";
buildTree(root->left);
cout<<"now enter the data which you want to be to the right"<<var<<" ";

buildTree(root->right);

}

int main()
{
	//now since we have created a  nodee let us start with the creation of binary tree 
	
	Node *root;
	buildTree(root)
	
	return 0;
	
};
