#include <iostream>
using namespace std;

void arr1(int * a,int n){
    for (int i=0;i<n;i++){
    cin>>a[i];
   }
}
int solve(int * a, int * b,int n){
   int cnt=0;
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++)
       if(a[i]==b[j]){
           cnt++;
       }
   }
     return cnt;
}

int main(){
  int n;
  cin>>n;
  int cnt;
  int a[n],b[n],d[n];
  arr1(a,n);
  arr1(b,n);
  cout<<solve(a,b,n);

  
  
  return 0;

}