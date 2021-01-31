#include <iostream>
using namespace std;
int main(){
int n,maxi,second=0;
maxi=-1e9;
cin>>n;
int a[n];
for(int i=0; i<n;i++){
cin>>a[i];
}
for(int i=0; i<n;i++){
if(a[i]>maxi)
maxi=a[i];
second=a[i-1];
} 

cout<<second;

 return 0;
}