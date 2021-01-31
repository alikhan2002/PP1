#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
set<int> v;
string s;
cin>>s;


for(int i=0;i<s.size();i++){
        v.insert(tolower(s[i]));
    
}

cout<<v.size()<<endl;

set<int> :: iterator it;
for(it=v.begin();it!=v.end();it++){
   cout<<char(*it)<<" ";
}






    return 0;
}