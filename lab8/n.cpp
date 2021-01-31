#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
set<int> v;
int n;
cin>>n;
int x;
for(int i=0;i<n;i++){
cin>>x;
v.insert(x);
}
set<int> :: iterator it;
int sum=0;
for(it=v.begin();it!=v.end();it++){
    if(*it%2!=0){
        cout<<*it<<" ";
    }
}


return 0;
}