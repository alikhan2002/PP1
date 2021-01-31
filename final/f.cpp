#include <iostream>
using namespace std;
int rev(int n){
  int rem,ans=0; 
  while(n>0){
     rem=n%10;
     n/=10;
     ans*=10;
     ans+=rem;
  }
  return ans;
}

int main(){
  long long n,m,k,sum;
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>m>>k;
  sum=rev(m)+rev(k);
  cout<<rev(sum)<<endl;
}
}