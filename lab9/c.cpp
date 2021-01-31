#include <iostream>
#include <map>
using namespace std;
int main(){
map<int,int> m;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
  cin>>a[i];
  m[a[i]]++;
}
int cnt=0;
map<int,int> :: iterator it;
for(it=m.begin();it!=m.end();it++){
    if((*it).second>1){
        cnt++;
    }
    
}cout<<cnt;
}
