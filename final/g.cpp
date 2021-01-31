#include <iostream>
#include <cmath>
using namespace std;
bool prime(int n){
    if(n==1 || n==2 || n==0) return false;
    for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
    }
	return true;
}
int main(){
int n,c=0;
cin>>n;
int t=n;
// for(int i=2;i<=n/2;i++){
//     if(n%i!=0){
//      cout<<n;
//      return 0;
//     }
// }
while(c<n){
   
  if(prime(n) && prime(c) && n+c==t){
      cout<<c<<" "<<n;
      break;
  } n--;
    c++;
}
}