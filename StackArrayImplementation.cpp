#include<bits/stdc++.h>
using namespace std;
#define maxsize 101 

class Stack
{
	private :
	int top;
	int x[maxsize];
	
	public :
	Stack()
	{
		top = 0;		
	}
	
	int pushpop();
	int display(int);
};
int Stack :: pushpop()
{
	int ch,a;
	
	do
	{
		cout<<"1:push\n2:pop\n3:exit";
		cin>>ch;
		switch(ch)
		{
			case 1 : cout<<"enter a no. to push\n";
			cout<<top;
					 cin>>a;
					 x[top] = a;
					 top++;
					 break;
			case 2 : top = top-1;
					 break;
		}
	}
	while(ch != 3);
	return top;
}

int Stack :: display(int top)
{
	int i;
	for(i = 0 ; i < top ; i++)
	{
		cout<<x[i];
	}
	cout<<"\n";
	return 0;
}

int main()
{
	int ch,b;
	Stack s;
	do
	{
		cout<<"1 : enter in stack\n2 : display stack\n3 : exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1 : b = s.pushpop();break;
			case 2 : s.display(b);break;
			case 3 : break;
		}
	}
	while(ch!=3);
	return 0;
}
