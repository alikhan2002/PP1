#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long 
using namespace std;

int main(){
int n;
cin>>n;
int a=(n*(n+1))/2;
vector<unsigned ll int> v(a);
int x=1;
int sum=0;
int cnt=0;
for(int i=0,j=1;i<=a,j<=a;i++,j++){
   sum+=i;
   cnt+=j;
   fill(v.begin()+sum,v.begin()+cnt,j);
     cout<<v[i]<<" ";


}



}