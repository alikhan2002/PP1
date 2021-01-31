#include <iostream>
using namespace std;
void prime(int a,int p){
if (a<2) return;
if(a%p==0){
 cout<<p<<" ";
 prime(a/p,p);   
}else{
    prime(a,p+1);
}
}
int main(){
int n,p=2;
cin>>n;
prime(n,p);
}