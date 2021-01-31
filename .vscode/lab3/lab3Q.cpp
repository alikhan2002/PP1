#include <iostream>
using namespace std;
int main(){
long long int x;
cin>>x;
 if(x<0){cout<<"No";}
else if((x*x)%24==1){
    cout <<"Yes";
}else if( x==2 | x==3){
    cout<<"Yes";
}else{cout<<"No";}


    return 0;
}