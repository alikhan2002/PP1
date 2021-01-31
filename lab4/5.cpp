#include <iostream>
using namespace std;
int main(){
int n,max = -1e9 - 17, second = -1e9 - 17;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cin>>a[i][j];
    }
} 

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       if(max<a[i][j]){
           second=max;
             max=a[i][j];
       } else if(a[i][j] > second && a[i][j] != max)
        second = a[i][j];
    }
}   if(second == -1e9 - 17) cout << 0;    else cout << second;
  
    
    return 0;
}