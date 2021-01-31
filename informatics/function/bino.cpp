#include <iostream>
using namespace std;
int fibo(int n){
    if(n==0) return 1;
    return fibo(n-1)*n;
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}