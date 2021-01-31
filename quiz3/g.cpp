#include <iostream>
using namespace std;
int pf(int n,int m){
 if(n<2) return 0;
if(n==m) return m;
if(n%m==0){
  return pf(n/m,m);
}else return pf(n,m+1);


}


int main ()
{ 
  int n,m=2;
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<pf(n,m)<<" ";
}
}