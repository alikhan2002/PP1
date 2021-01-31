#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n;
cin>>n;
int x[n];
for(int i=0;i<n;i++){
    cin>>x[i];
}
for(int i=0;i<n;i++){
    cout<<x[i]<<" ";
}
cout<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(x[i]%2==0 && x[j]%2==0){
            if(x[i]>x[j]){
                swap(x[i],x[j]);
            }
         }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(x[i]%2==1 && x[j]%2==1){
            if(x[i]<x[j]){
                swap(x[i],x[j]);
            }
         }
    }
}
int b[n];
int j=0;
for(int i=0;i<n;i++){
    if(x[i]%2==0){
        b[j]=x[i];
        j++;
    }
}
for(int i=0;i<n;i++){
    if(x[i]%2==1){
        b[j]=x[i];
        j++;
    }
}

for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
}

return 0;
}