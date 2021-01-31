#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int maxi=0,temp,a;

for(int i=0;i<n;i++){
    cin>>temp;
    if(temp%10==7){
        
        maxi++;
    }
    
    }
     
    cout<<maxi<<endl;
    return 0;
}