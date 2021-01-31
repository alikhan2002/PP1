#include <iostream>
using namespace std;

void arr1(int * a,int n){
    for (int i=0;i<n;i++){
    cin>>a[i];
   }
}

void solve(int *a,int *b,int n){
    int cnt=0;
    int prev=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((b[j]==b[j+1]) && (a[i]!=a[i+1])){
                i++;
            }
            if(a[j]==b[i]) 
            {
            cnt++;}
            
        }
    }cout<<cnt;
}
int main(){
  int n;
  cin>>n;
  int a[n],b[n];
  arr1(a,n);
  arr1(b,n);
  
  solve(a,b,n);
  
  
  
  return 0;

}