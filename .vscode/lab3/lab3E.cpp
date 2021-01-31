#include <iostream>
using namespace std;
int main(){
long long int n,sum=0;
cin>>n;
long long int a[n];
for(int i=0; i<n;i++){
   cin>>a[i]; 
sum=sum+a[i];
}
cout<<sum<<endl;
    return 0;
}