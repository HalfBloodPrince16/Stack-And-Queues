#include<bits/stdc++.h>
using namespace std;

#define size 10

struct Node
{
	int data;
	Node* link;
};
struct Node* front = NULL;
struct Node* rear = NULL;

class Queue
{
	public :
		int count;
		
		Queue()
		{
			count = 0;
		}
		
		void enqueue();
		void dequeue();
		void display();
};

void Queue :: enqueue()
{
	int data;
	Node* temp = new Node();
	cout<<"\nenter data for the node:";
	cin>>data;
	temp->data = data;
	temp->link = NULL;
	
	if(front == NULL && rear == NULL)
	{
		front = rear = temp;
		return;
	}
	rear->link = temp;
	rear = temp;
	return;
}
void Queue :: dequeue()
{
	Node* t = front;
	front = front->link;
	free(t);
}

void Queue :: display()
{
	Node* tt = front;
	while(tt != NULL)
	{
		cout<<tt->data<<"->";
		tt = tt->link;
	}
	cout<<"\n";
}

int main()
{
	int ch;
	Queue s;
	do
	{
		cout<<"1:Enqueue\n2:Dequeue\n3:Display\n4:Exit";
		cin>>ch;
		switch(ch)
		{
			case 1 : s.enqueue();break;
			case 2 : s.dequeue();break;
			case 3 : s.display();break;
			case 4 : break;
		}	
	}
	while(ch!=4);
	
	return 0;
}







