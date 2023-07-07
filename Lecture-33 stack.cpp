#include<iostream>
using namespace std;
class stack {
	public :
		int *arr;
		int size;
		int top;
		stack(int size)
		{
			this->size=size;
			arr=new int[size];
			top=-1;
		}
		
		void push(int element)
		{
			if(size -top>=1)
			{
				top++;
			arr[top]=element;
			}
			else
			{
				cout<<"The stack is already full";
				
			}
		}
		void pop()
		{
			if(top>=0
			{
				top--;
				
			}
			else
			{
				cout<<"The stack is currently empty and there no elemets in the stack ";
				
			}
		}
		int  peek()
		{
			if(top<0) cout<<"There are no elements in the stack to peek ";
			else
			{
				cout<<"The element at the top of the stack is "<<arr[top];
			}
			//cout<<"The element at the top of the stack is "<<arr[top];
			
		}
		bool isEmpty()
		{
			if(top<0) 
			{
				cout<<"the stack is currently empty";
			return true;
			}
			return false
		}
};

int main()
{
stack new_stack(5);
new_stack.peek();
new_stack.push(5)
new_stack.peek();
new_stack.push(4);
new_stack.peek();
new_stack.push(3);
new_stack.peek();
new_stack.peek();
new_stack.peek();
new_stack.pop();
new_stack.peek();
new_stack.pop();
new_stack.pop();
new_stack.peek();

return 0;

	
}
