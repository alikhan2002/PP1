#include <iostream>
using namespace std;
int main(){
int max=-1,k,n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>k;
if(k>max) max=k;

}
cout<<max;
return 0;
}