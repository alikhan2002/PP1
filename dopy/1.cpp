#include <iostream>
using namespace std;
int main(){
int n,s=0;
cin>>n;
int sum=0;
int a[n];
for(int i=0;i<n;i++){
   sum=i+s;
   cout<<sum<<" "; 
   s=sum;   
   
}

    return 0;
}