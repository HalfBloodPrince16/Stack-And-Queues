#include <bits/stdc++.h>
using namespace std;
 
void showpq(priority_queue <int> gq)
{
    priority_queue <int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}
 
int main ()
{
    priority_queue <int> gquiz;
    int data;
    do
    {
    	cout<<"enter the data to be inserted\n0:toexit";
    	cin>>data;
    	gquiz.push(data);
	}
    while(data!=0);
    
 
    cout << "The priority queue gquiz is : ";
    showpq(gquiz);
 
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.top() : " << gquiz.top();
 
 
    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showpq(gquiz);
 
    return 0;
}
