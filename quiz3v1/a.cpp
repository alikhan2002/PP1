#include <iostream>
#include <vector>
#include <set>
#define ull unsigned long long 
using namespace std;
int main(){
ull x;
ull n,t;
cin>>n;
multiset<ull> ms;

for(int i=0;i<n;i++){
    cin>>x;
    ms.insert(x);
}
cin>>t;
vector<ull> v;
ull j;
for(int i=0;i<t;i++){
    cin>>j;
    v.push_back(j);
}

for(int i=0;i<t;i++){
         if(ms.count(v[i])>0){
            cout<<ms.count(v[i])<<endl;
          }else{
              cout<<"0"<<endl;
          }
       
   } 
}