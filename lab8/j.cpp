#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
vector<int> v;
int n;
cin>>n;
int x;
for(int i=0;i<n;i++){
cin>>x;
v.push_back(x);
}
int maxel=*max_element(v.begin(),v.end());
int minel=*min_element(v.begin(),v.end());
cout<<maxel-minel;
return 0;
}