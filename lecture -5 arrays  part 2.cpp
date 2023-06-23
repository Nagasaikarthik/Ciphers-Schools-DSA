#include<iostream>
using namespace std;
int main()
{
	int a[4];
	//int a[9];
	int i;
	cout<<"Give 5 integers as input "<<endl;
	//cout<<"Give 10 integers as input "<<endl;
	
	for(i=0;i<5;i++)
//	for(i=0;i<10;i++)
	{
		cin>>a[i];
		
	}
	cout<<"the 5 given inputs are :"<<endl;
	for(i=0;i<5;i++)
	//for(i=9;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}
