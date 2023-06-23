//while loops 
// if the conditon is  true then it is  executed 
#include<iostream>
using namespace std;
int main()
{
/*	
	int i;
	i=0;             //intilization 
	while(i<111)     // condition 
	{
		cout<<i<<" ";  //loop
	
		i++;          // update 
	}
	*/
	int  i;
	int input;
	i=100;
	for(i=1;i<101;i++)
{
	cin>>input;
	if(input == 65)//only takes input if exactly 65 
	{
		cout<<"congratulations you have guessed correct ";
		break;
	
	}

	}
}
