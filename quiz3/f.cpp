#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
void prime(int n,int f)
{
if (n<2) return;
if (n%f == 0)
{
  prime(n/f,f);
cout<<f<<" ";
  
}
    else
    prime(n,f+1);

}

int main ()
{ 
int n;
cin>>n;
int f=2;
prime(n,f);
    

    return 0;
}