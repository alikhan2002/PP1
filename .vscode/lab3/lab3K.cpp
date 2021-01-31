#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n,max=-1e9,pos;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==a[i+1]){
    pos=a[i];
     }}
    for(int i=0;i<n;i++){
     cout<<(a[i]-pos)<<endl;  
    }

    return 0;
}