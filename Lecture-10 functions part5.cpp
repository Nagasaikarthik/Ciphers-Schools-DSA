#include<iostream>
using namespace std;
 
 void printHi()//no parameters arr required 
 {
 	cout<<"Hi"<<endl;
 	return ;
 	
 }
 
 int sum(int a,int b)
 {
 	int c;
 	c=a+b;
 	
 	return c;
 	
 }
 
 int main()
 {
 	printHi();
 	int a,b;
 	a=4;
 	b=6;
 	int d;
 	d=sum(a,b);
 	cout<<"the sum is equal to"<<d;
 	
 }
