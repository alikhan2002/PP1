#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool prime(int n) {
    for (int i = 2; i <= sqrt(n*n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main(){
int n;
cin>>n;
while(prime(n)==1){
    n++;
    if(prime(n)==1){
        cout<<n;
        break;
    }
    if(n==1){
        cout<<2;
        break;
    }
    if(n==2){
        cout<<3;
        break;
    }
}



}