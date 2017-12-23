#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
struct Node* head = NULL;

void push(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->next = head;
	head = temp;
}

void pop()
{
	Node* top = head;
	head = head->next;
	free(top);
	return;
}

void display()
{
	Node* t = head;
	
	while(t != NULL)
	{
		cout<<t->data<<"->";
		t = t->next;
	}
	cout<<"\n";
}

int main()
{
	int ch,data;
	do
	{
		cout<<"1:PUSH\n2:POP\n3:DISPLAY\n4:Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1 : cout<<"Enter Data to be pushed";
					 cin>>data;
					 push(data);break;
			case 2 : pop();break;
			case 3 : display();break;
			case 4 : break;
		}
	}
	while(ch!=4);
	return 0;
} 
