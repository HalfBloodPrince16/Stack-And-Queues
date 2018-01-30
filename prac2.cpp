#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int cond;
	string name;
	Node* next;
};
struct Node* head = NULL;

class Priority
{
	public : 
		int count,cond;
		string name;
		
		Priority()
		{
			count = 0;
			cond = 1;
			name = ' ';
		}
		void enroll();
		void check();
		void queue(struct Node *);
		void bubbleSort(struct Node *);
		void swap(struct Node *,struct Node *);
};

void Priority :: enroll()
{
	cout<<endl;
	cout<<"Enter your name";
	cin>>name;
	cout<<"Enter your Condition 1:Critical 2:Medium 3:Normal";
	cin>>cond;
	
	Node* temp = new Node();
	temp->name = name;
	temp->cond = cond;
	temp->next = head;
	head = temp;
}

void Priority :: queue(struct Node *start)
{
    struct Node *temp = start;
    cout<<"\n\n";
    
    cout<<"NAME";
    cout<<"    "<<"CONDITION";
    cout<<endl;
    while (temp!=NULL)
    {
        cout<<temp->name;
        cout<<"    \t"<<temp->cond;
        temp = temp->next;
        cout<<endl;
    }
}

void Priority :: bubbleSort(struct Node *start)
{
    int swapped, i;
    struct Node *ptr1;
    struct Node *lptr = NULL;
 
    if (ptr1 == NULL)
        return;
        
    do
    {
        swapped = 0;
        ptr1 = start;
 
        while (ptr1->next != lptr)
        {
            if (ptr1->cond > ptr1->next->cond)
            { 
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}

void Priority :: swap(struct Node *a, struct Node *b)
{
    int temp = a->cond;
    a->cond = b->cond;
    b->cond = temp;
    
    string t;
    t = a->name;
    a->name = b->name;
    b->name = t;
}

int main()
{
	Priority p;
	int ch;
	do
	{
		cout<<"\n**************MAIN MENU***************\n";
		cout<<"1:Enroll in Hospital Queue\n2:Check the Queue\n3:Exit";
		cin>>ch;
		switch(ch)
		{
			case 1 : p.enroll();
					 p.bubbleSort(head);break;
			case 2 : p.queue(head);break;
			case 3 : break;
		}
	}
	while(ch!=3);
	
	return 0;
}

