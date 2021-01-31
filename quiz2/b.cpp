#include <iostream>
using namespace std;

void arr1(int * a,int n){
    for (int i=0;i<n;i++){
    cin>>a[i];
   }
}
void print(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void solve(int * a, int *b,int *d, int n){
   for(int i=0;i<n;i++){
       d[i]=abs(a[i]-b[i]);
   }
     
}

int main(){
  int n;
  cin>>n;
  int a[n],b[n],d[n];
  arr1(a,n);
  arr1(b,n);
  solve(a,b,d,n);
  print(d,n);
  
  
  return 0;

}