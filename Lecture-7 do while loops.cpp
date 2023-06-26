//Do-while loops 
//password manager 
//it checks either one password satisifies the minimum criteria  
#include<iostream>
using namespace std;

int main()
{
	int password;
	
	do
	{
		cin>>password;
		
	}
	while( password<999999);//the condition in the wgile loop ,unitl it is true ,the loop will run 
	
	{
		cout<<"99"<<endl;
		
		cin>>password;
		if(count>100) break;
		
	}
	
}
	/*cout<<"Enter the password"<<endl;
	cin>>password;
	
	if(password<999999)
	{
		cout<<"The password does not need the required conditions,please enter the password again";
		cin>>password;
	
	}
	cout<<"The user has now entered the correct password "<<endl;
	return 0;
	*/
/*
do while --then check the condition which is first execute command 
do---doing it once 
while ----going into a while condition 

*/
int i;
for(i=0;i++)
{
	cout<<i;
	if(i>100)break;//this statement gets executed when i is 101 
	`
}
return 0; 

