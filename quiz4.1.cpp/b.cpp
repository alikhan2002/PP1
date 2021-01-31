#include <iostream>
#include <vector>
using namespace std;
int main(){
string s;
cin>>s;
int n=26;
int q=219;
vector<char>v(s.size());
for(int i=0;i<s.size();i++)
{
v[i]=v[i]+(122-(s[i]-97));
}
// cout<<s[i];
// }
 for(int i=0;i<s.size();i++)
 {
cout<<v[i];
 }
}