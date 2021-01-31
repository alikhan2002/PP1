#include<iostream>
#include <map>
#include <set>
using namespace std;
int main(){
int n;
cin>>n;
int m;	
set<string> set1, set2;
set<string>::iterator it1;
set<string>::iterator it2;
for(int i=0;i<n;i++)
	{
	    string s1;
		cin>>s1;
		set1.insert(s1);

	}
    cin>>m;
for(int i=0;i<m;i++)
	{
	    string s1;
		cin>>s1;
		set2.insert(s1);

	}
  cout<<"Missed students:"<<endl;

	for(it1=set1.begin();it1!=set1.end();it1++)
		{  
			if(set2.count((*it1)) == 0)
			{
				cout<<"- "<<(*it1)<<endl;
			}
		}
cout<<"Not in the group:"<<endl;
        for(it2=set2.begin();it2!=set2.end();it2++)
		{  
			if(set1.count((*it2)) == 0)
			{
				cout<<"- "<<(*it2)<<endl;
			}
		}

}