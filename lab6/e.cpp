#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double hyp(int a, int b)
{
  return sqrt(a*a+b*b);
}
int main()
{
int n,m;
cin>>n>>m;

cout<<setprecision(4)<< hyp(n,m);
return 0;
}