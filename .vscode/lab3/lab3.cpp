#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n,max=-1e9;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>max) max=a[i];
}
cout<<max<<endl;

    return 0;
}