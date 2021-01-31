#include <iostream>
#include <cmath>
using namespace std;
// void prime(int n){


// if(prime(n)%2==0){
//     cout<<2;
// }

void prime(int n){
if(n==2) 
{cout<<2; 
return;}
if(n==3)
{cout<<3; 
return;}

while(n%2==0){
        cout<<2<<" ";
        n/=2;
}
    for(int i=3; i<=sqrt(n); i+=2){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
     if (n > 2)
   cout<<n<<" ";
 

} 
    



int main(){
int n;
cin>>n;
prime(n);
}