#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <cmath>
#define ll long long
  
// int degree(int a,int b){
//    return 
// }
int gen() 
{    static int i = 0;
     return i++;
} 
  
using namespace std; 
int main() 
{ 
    int n;
     cin>>n;
    vector<long long> v(n+1); 
    
    generate(v.begin(), v.end(), gen); 
  for(int i=0;i<v.size();i++){
       long long a=pow(v[i],v[i]);
        cout<<a<< " "; 
    } 
    return 0; 
} 