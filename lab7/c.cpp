#include <iostream>
using namespace std;
void binary(int *a,int n){
for(int i=0;i<n;i++){
    cin>>a[i];
}
}
void equal(int *a,int n){
    for(int i=0;i<n;i++){
    if(a[i]==n) {
         cout<<"Yes";
         return;
   }
} cout<<"No";
}
int main(){
    int n;
    cin>>n;
    int a[n];
    binary(a,n);
    int x;
    cin>>x;
    equal(a,x);
    return 0;
}