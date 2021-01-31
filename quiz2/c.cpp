#include <iostream>
using namespace std;
int main(){
    int n;
    int b[1001]={0};
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int current=0,high=0,most;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]>a[j]){
                swap(a[j],a[i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        current++;
        if(i==n-1 || a[i]!=a[i+1]){
            if(current>high){
                high=current;
                most=a[i];
                b[i]=high;
            }current=0;
        }
    }
    int maxi=-1000;
    for(int i=0;i<n;i++){
        if(maxi<b[i]){
            maxi=b[i];
        }
    }
    int cnt=1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
        cnt++;
        }else{
            cnt=1;
        }
        if(cnt==maxi){
        cout<<a[i]<<" ";
            if(i==n-2){
                if(a[i]!=a[i+1])
                cout<<a[i+1];
            }
        } 
}
return 0;
}
