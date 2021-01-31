#include <iostream>
#include <vector>
using namespace std;
void sumi(vector<int> v){
    for(int i=0;i<(v.size())/2;i++){
       cout<<v[i]+v[v.size()-i-1]<<" ";
       if(v.size()%2==1 && i==(v.size()/2)-1){
           cout<<v[i+1];
       }
    }
}
int main(){
vector<int> v;
int x;
while(x!=0){
cin>>x;
if(x==0) break;
v.push_back(x);
}sumi(v);



}