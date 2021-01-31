#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> v;
   string s;
   cin>>s;
   for(int i=0;i<s.size();i++){
       if(s[i]>='0' && s[i]<='9'){
           v.insert(s[i]);
       }
   }
   set<int> :: iterator it;
   for(it=v.begin();it!=v.end();it++){
       if(v.count(*it)!=0){
           cout<<char(*it);
       }
       else{
           cout<<"NOKa";
       }
   }


}