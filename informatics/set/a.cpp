#include <iostream>
#include <set>
using namespace std;
int main(){
set<int> s;
int n,m;
int k=0;
cin>>n;
int a[n],b[m];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>m;
int d[n+m];
for(int i=0;i<n;i++){
     d[k++]=a[i];
}
for(int i=0;i<m;i++){
    cin>>b[i];
}
for(int i=0;i<m;i++){
    d[k++]=b[i];
}
for(int i=0;i<m+n;i++){
    cout<<d[i];
}
// for(int i=0;i<m+n;i++){
//     s.insert(d[i]);
// }
// cout<<s.size();
// set<int> :: iterator it;
// for(it=s.begin();it!=s.end();it++){
//     cout<<*it<<" ";
// }
}