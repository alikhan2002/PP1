#include <iostream>
#include <set>
using namespace std;
int main(){
set<char> sq;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
     for (size_t j = i + 1; j < s.size(); j++)
{
          if(s[i]==s[j]){
              if(sq.count(s[i])==1)
               s.erase(s.begin()+i);
        }
     } 
     sq.insert(s[i]);
}

set<char>::iterator it;
for(it=sq.begin();it!=sq.end();it++){
    cout<<*it;
}


}