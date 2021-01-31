#include <iostream>
using namespace std;
int main (){   
int n,k;
cin >>n>>k;
if(n>k && (k==2)){
    cout<<n;
} else if(k==1){ cout<<2*n;} else if(n>(k+1)){
    cout <<"4";
}else  if(n==k){
    cout <<"2";
}else if (n<k){
    cout <<"2";
}
return 0;
 
}
