#include<iostream>
using namespace std;
 
 int main()
 {
 	PrintHi(); //First calling the printHi function
 	int a,b;
 	int c;
 	a=4;
 	b=6;
 	cout<<" the values of a and b before passing into the function are :"<<a<<" "<<b<<endl;
 	return ;
 	
 }
 void fun(int a,int b)
 {
 	a=999999;
 	b=999999;
 	cout<<"the value of the a and b after swapping outside the function are :"<<a<<" "<<b<<endl;
 	
 }
 int main()
 {
 	PrintHi();////First calling the printHi function
 	 
 	 
   int a,b;
   int c;
   a=4;
   b=6;
   
   //c=75;
   //int d;
   //d=sum(a,b);
   //cout<<"the sum is equal to "<<d<<" "<<"the value of a is "<<a;
   //cout<<"the value of c is "<<c<<endl;
   swap(a,b);
   
cout<<"the values of a and b after passing into the fun function are :"<<a<<" "<<b<<endl;
return 0;
 }
