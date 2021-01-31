#include <iostream>
using namespace std;
int b(int n,int k){
if(n==1)return 0;
if(n==2)return 1;
return ((k*b(n-1,k))%10+b(n-2,k))%10;
}
int main (){
int k,n;
cin>>k>>n;
cout<<b(n,k)%10;
return 0;
}