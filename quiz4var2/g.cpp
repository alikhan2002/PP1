#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n,m;
cin>>n;
int a,b;
vector<int> v;
vector<int> vs;
for(int i=0;i<n;i++){
     cin>>a;
    v.push_back(a);
}
cin>>m;
for(int i=0;i<m;i++){
    cin>>b;
    vs.push_back(b);
}
// sort(v.begin(),v.end());
// sort(vs.begin(),vs.end());
vector<int> me(n+m);
merge(v.begin(),v.end(),vs.begin(),vs.end(),me.begin());
sort(me.begin(),me.end());
vector<int>::iterator it;
for(it=me.begin();it!=me.end();it++){
    cout<<*it<<" ";
}


}