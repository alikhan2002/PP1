#include <iostream>
#include<vector>
using namespace std;
vector<int> v;
vector<int> vs;
int n,m;
bool twosum(int l){
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i]+v[j]==l && i!=j ){
                return true;
            }
        }
    }return false; 
}
 int main(){
    int a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    cin>>m;
     for(int i=0;i<m;i++){
        cin>>b;
        vs.push_back(b);
    }
   for(int i=0;i<m;i++){
        if(twosum(vs[i])){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
     } 
}


