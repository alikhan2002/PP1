#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int cnt=1,check=v[v.size()-1];
    for(int i=v.size()-2;i>=0;i--){
        if(check<v[i]){
            cnt++;
        }else{
            check=v[i];
        }
    }cout<<cnt;   
}