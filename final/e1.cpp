#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    vector<string> vs,res;
    map<string,vector<string> > mm;
    while(n--){
        string s;
        cin>>s;
        vs.push_back(s);
    }
    cin>>m;
    while(m--){
        string x,y;
        cin>>x>>y;
        mm[x].push_back(y);
        mm[y].push_back(x);
    }
    string ans;
    cin>>ans;
    res=mm[ans];
    sort(res.begin(),res.end());
    cout<<res.size()<<"\n";
    for (int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}