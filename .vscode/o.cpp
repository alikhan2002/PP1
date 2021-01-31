#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int maxi,temp;

for(int i=0;i<n;i++){
    cin>>temp;
    if(temp>maxi) 
    temp=maxi;

}
    cout<<maxi;
    return 0;
}