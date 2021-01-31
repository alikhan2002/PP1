#include <iostream> 
using namespace std;
int inf(int prev)
{
int n;
cin>>n;
if(n==0)return prev;
else return inf(n)+prev;
}
int main()
{
    cout<<inf(0);
    return 0;
}