#include<iostream>
#include<stack>
using namespace std;
int main()
{
	string s;
	cin>>s;
	stack<char> st;
	for(int i=0;i<s.size();i++)
	{	
		if(s[i]=='0') st.push('0');
		else if(s[i]=='1')
		{
			if(st.size()==0 || st.top() == '0')
			{
				st.push('1');
			}
			else if(st.top() == '1')
			{
				st.pop();
			}
		}	
	}
	stack<char> ans;
	while(st.size()!=0)
	{
		ans.push(st.top());
		st.pop();
	}
	while(ans.size()!=0)
	{
		cout<<ans.top();
		ans.pop();
	}

	return 0;
}