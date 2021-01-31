#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int odd=0,temp,even=0;

for(int i=0;i<n;i++){
    cin>>temp;
    if(temp%2==0){
    even++;
} else {
    odd++;
    }
}

  cout<<even<<" ";
cout<<odd<<endl;


    return 0;

}