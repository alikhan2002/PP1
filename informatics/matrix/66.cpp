#include <iostream>
using namespace std;
int main(){
long long n,cnt=0;
cin>>n;

long long a[n];
for(int i=0;i<n;i++){
cin>>a[i];}
int prev=a[0];
for(int i=1;i<n;i++){
if(a[i]>prev) cnt++;
else if(a[i]<=prev){
    prev=a[i];
}
}
cout<<cnt;
}