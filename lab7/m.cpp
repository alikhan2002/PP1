#include <iostream>
using namespace std;
void tr(int *a,int n){
    for(int i=1;i<=n;i++){
        a[0]=0;
        cout<<a[i]+i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int a[1000]={0};
    tr(a,n);
    return 0;
}