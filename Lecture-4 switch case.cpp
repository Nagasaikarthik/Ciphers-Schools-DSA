/*#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Give three integers as input :a,b,c<<endl;
	cin>>a>>b>>c;
	
	if(a>b && c>d)
	{
		cout<<"haha";
	}
	else if(a>b && c>d)
	{
		cout<<"hehe";
		
	}
	else (a<b&&c>d)
	{
		cout<<"huhu";
	}
}
*/
int a;
cout<<"entere a integer a"<<endl;
cin>>a;
switch(a)//the condition in this paranthesis //it will first evaulte the value of a 
{
	case 1:
		cout<<"the value of a is 1 "<<endl;
			break;
	case 2:
		cout<<"the value of a is 2"<<endl;	 
		default :
		cout<<"default will be always printed ";
			
			 break;
}
return 0;
}

