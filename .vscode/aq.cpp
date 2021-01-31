#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int z=0,temp,a;

for(int i=0;i<n;i++){
    cin>>temp;
while(temp>0){
if (temp%10==0)
    z++;
    temp/=10;
}
}
cout<<z<<endl;




return 0;
}