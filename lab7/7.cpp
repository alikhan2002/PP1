#include <iostream>
using namespace std;
string toBinary(int n, string s)
{
if(n==1) return s;
else return toBinary(n/2, char((n%2)+'0')+s);

}



int main()
{
  int n;
  cin>>n;
  cout<<toBinary(n);

return 0;
}