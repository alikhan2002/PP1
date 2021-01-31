#include <iostream>
using namespace std;
bool op(int n){
    if(n==1) return 1;
 if(n==3) return false;
 if(n==2) return false;
 if(n==5) return false;
 if(n%3==1) return true;
 if(n%5==1) return true;
 if(n%5==0) return true;
 if(n%8==1) return true;
 if(n%10==1) return true;
 if(n%10==4) return true;
 if(n%10==9) return true;
 return false;
}
int main(){
int n;
cin>>n;
if(op(n)==true){
    cout<<"YES";
}else{
    cout<<"NO";
}
}