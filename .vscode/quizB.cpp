#include <iostream>
using namespace std;
int main(){
int n,k,l,m,x;
cin>>n;
x=n%10; 
l=(n/10)%10;
 k=(n/10000)%10; 
 m=(n/100000)%10;
if((x+l)==(k+m)){
    cout<<"Yes";
}else{
    cout<<"No"; }
    return 0;
}