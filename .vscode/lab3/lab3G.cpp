#include <iostream>
using namespace std;
int main(){
int n,max=-1e9,min=1e9,p;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
      if(a[i]>max){
         max=a[i];
         p=i;}
     if(a[i]<min) min=a[i];}
 a[p]=min;
for(int i=0;i<n;i++){
    cout <<a[i]<<" ";
}
    return 0;

}