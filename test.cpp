#include"bits/stdc++.h"
using namespace std;

std::stack<char>s;
void chkpriority(char c)
{
	int flg=0;
	if(c == '+')
	{
		while(flg==0)
		{		
		   if(s.empty() == true)
		   {
		   		s.push('+');
		   		flg=1;
		   }
		   else if(s.top() == '*' || s.top() == '/')
		   {
		   		cout<<s.top();
		   		s.pop();
		   		flg =0;
		   		
		   }
		   else
		   {
		   		s.push('+');
		   		flg=1;
		   }
		}

	}
	else if(c == '-')
	{
		while(flg==0)
		{		
		   if(s.empty() == true)
		   {
		   		s.push('+');
		   		flg=1;
		   }
		   else if(s.top() == '*' || s.top() == '/')
		   {
		   		cout<<s.top();
		   		s.pop();
		   		flg =0;
		   		
		   }
		   else
		   {
		   		s.push('-');
		   		flg=1;
		   }
		}
	}
	else if(c == '*')
	{
		while(flg==0)
		{		
		   if(s.empty() == true)
		   {
		   		s.push('+');
		   		flg=1;
		   }
		   else if(s.top() == '/')
		   {
		   		cout<<s.top();
		   		s.pop();
		   		flg =0;
		   		
		   }
		   else
		   {
		   		s.push('*');
		   		flg=1;
		   }
		}
	}
	else if(c == '/')
	{
		s.push('/');
	}
}

int main(int argc, char const *argv[])
{
	int i,j,k;
	string str;
	cout<<"infix exprsn"<<endl;
	cin>>str;
	cout<<"postfix exprsn"<<endl;
	for(i=0;i<str.length();i++)
	{
		
		if(str[i] >= 42 && str[i] <= 47)
		{
			if(s.empty() == true)
			{
				s.push(str[i]);
			}
			else
			{
				chkpriority(str[i]);
			}
						
		}
		else if(str[i] >= 97 && str[i] <= 122)
		{
			cout<<str[i];
		}
	}
	while(s.empty() == false)
	{
		cout<<s.top();
		
		s.pop();
	}
	
	/*s.push('a');
	s.push('+');
	s.push('c');
	s.push('*');
	s.push('e');*/
	
	return 0;
}