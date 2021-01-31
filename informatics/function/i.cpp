#include <iostream>
using namespace std;
int fact(int n){
    if(n==0) return 1;
    return fact(n-1)*n;
}
int bino(int n, int m){
    if(n==m) return 1;
    if(m==0) return 1;
    return (fact(n))/(fact(m)*(fact(n-m)));
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<bino(n,m);
    return 0;
}