#include<iostream>
#include<set>
using namespace std;
int main()
{
	// freopen("INPUT.TXT", "r", stdin);
	// freopen("OUTPUT.TXT", "w", stdout);
	int t;
	cin>>t;
	for(int t1=0;t1<t;t1++)
	{
		set<int> set1, set2;
		string s1,s2;
		cin>>s1>>s2;
		bool exist1 = false, exist2 = false;
		for(int i=0;i<s1.size();i++)
		{
			set1.insert(s1[i]-'0');
		}
		for(int i=0;i<s2.size();i++)
		{
			set2.insert(s2[i]-'0');
		}
		set<int>::iterator it1;
		for(it1=set1.begin();it1!=set1.end();it1++)
		{
			if(set2.count((*it1)) == 0 )
			{
				exist1 = true;
			}
		}

		set<int>::iterator it2;
		for(it2=set2.begin();it2!=set2.end();it2++)
		{
			if(set1.count((*it2)) == 0 )
			{
				exist2 = true;
			}
		}
		if(exist2 or exist1)
		{
			cout<<"NO"<<endl;
		}
		else cout<<"YES"<<endl;

	}
	return 0;
}