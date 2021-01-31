#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
  cin>>n;
}
for(int i=0;i<n;i++ ){
   for(int j=0;j<n;j++){
     if(a[i]<a[j]) 
     swap(a[i],a[j]);
   }
cout<<a[i];
}

}