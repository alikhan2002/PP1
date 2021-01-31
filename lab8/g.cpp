#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool prime(int n) {
    if(n==1) return false;
       for (int i = 2;i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main(){
vector<int> v;
int n,x,a,cnt=0;
cin>>n;
for(int i=0;i<n;i++){
      cin>>x;  
    v.push_back(x);
}
cin>>a;
for (int i = 0; i <v.size(); i++) {
        if (prime(v[i]) && v[i]>=a){
            cnt++;
    }
    
}
cout<<cnt;


    return 0;
}