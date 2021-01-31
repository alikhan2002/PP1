#include <iostream>
using namespace std;
int main(){
int n,maxi=-1e9-17,mini=1e9+17;
cin>>n;
int a[n];
int cnt=0;
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n;i++){
    if(a[i]>maxi)
    maxi=a[i];
    if(a[i]<mini)
    mini=a[i];
    
}int x;
for(int i=0;i<n;i++){


x=maxi-mini+1-n;

}
cout<<x;
 return 0;
}