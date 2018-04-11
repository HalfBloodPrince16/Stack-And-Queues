Postfix to Infix Expression conversion.
#include"bits/stdc++.h"
using namespace std;

std::stack<string>ss;

int main(int argc, char const *argv[])
{
	int i,j;
	string str,s="";
	cout<<"Enter a postfix expr";
	cin>>str;
	string opr = "";
	for(i=0 ; i<str.length() ; i++)
	{
		
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				opr += str[i];
	           	ss.push(opr);
			}
			else
			{
				string op1 = ss.top();
				ss.pop();
				string op2 = ss.top();
				ss.pop();
				ss.push(op2 + str[i] + op1);
			}
	
		opr="";
	}
	cout<<ss.top();
	return 0;
}
