#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
string s;
cin>>s;
vector<char> v(s.begin(),s.end());
// v.push_back(s);
sort(v.begin(),v.end());
cout<<"The anagram variants for string "<<s<<" are:"<<endl;
do{
   
         for(int i = 0;i<s.size();i++)
             {cout<<v[i];
             }
                 cout<<endl;
                }
while(next_permutation(v.begin(),v.end()));
}
