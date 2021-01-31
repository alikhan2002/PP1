#include <iostream>
#include <algorithm>
using namespace std;
void f(int *a,int n){
    for(int i=0;i<n;i++){
        cin>>a[i]; 
    }  
}
void c(int *a,int n){
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    f(a,n);
    sort(a,a+n);
    c(a,n);
    return 0;
}