#include <iostream>
using namespace std;

int factor(int n)
{
      
    if(n==0) return 1;
    else return factor(n-1)*n;
}
int main(){
int n;
cin>>n;
cout<<factor(n);


}