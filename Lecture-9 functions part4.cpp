#include<iostream>
using namespace std;
int sum(int a,int b)//i have declared that a function called sum exists but 
int main()
{
	int a,b;
	a=3;
	b=5;
	int c;
	cout<<a<<" "<<b<<endl;//these values are before i call the function "sum"
	c=sum(a,b);
	
//int sum(int a,int b)//int a----->3,int b------->5
cout<<c<<endl;
cout<<a<<""<<b<<endl;//these values of a,b are after i call the function "sum"  

return 0;
	
}
int sum(int a,int b)
{
	return 0;
}
