#include<bits/stdc++.h>
using namespace std;
#define maxsize 101

class Queue
{
	private :
		int front,rear;
		int x[maxsize];
	public :
		Queue()
		{
			front = -1;
			rear = -1; 
		}
	
	int operation();
	int display(int);
};

int Queue :: operation()
{
	int ch,a;
	do
	{
		cout<<"1:Enqueue\n2:Dequeue\n3:Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1 : cout<<"enter no to Enqueue";
					 cin>>a;
					 if(front == -1 && rear == -1)
					 {
					 	front = 0;
					 	rear = 0;
					 }
					 x[rear] = a;
					 rear++;
					 break;
			case 2 : if(front == rear)
					 {
						front =-1;
						rear = -1;						
					 }
					 else
					 {
					 	front++;
					 }
					 break;
			case 3 : break;
		}
	}
	while(ch!=3);
	return rear;
}

int Queue :: display(int rear)
{
	int i;
	for(i = front ; i < rear ; i++)
	{
		cout<<x[i];
	}
	cout<<"\n";
	
	return 0;
}

int main()
{
	Queue s;
	int ch,b;
	do
	{
		cout<<"1:enqueue or dequeue\n2:display\n3:exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1 : b = s.operation();break;
			case 2 : s.display(b);break;
			case 3 : break;
		}
	}
	while(ch!=3);
	return 0;
}
