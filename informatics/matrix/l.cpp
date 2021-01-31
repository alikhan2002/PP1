#include <iostream>
using namespace std;
int main(){
    int n;
    int cnt=0,ind;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int Petya;
    cin>>Petya;
    for(int i=0;i<n;i++){
        if(Petya<=a[i]){
            ind=i;
        } 
    }
    cout<<ind+2;
}