#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n,m;
    vector<int> v;
    vector<int> vs;
    set<int> s;
    set<int> g;
    set<int>::iterator it;
    set<int>::iterator ip;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back(a[i]);
        s.insert(a[i]);
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
           vs.push_back(b[i]);
           g.insert(b[i]);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<vs.size();j++){
            if(v[i]==vs[j]){
                v.erase(v.begin()+i);
                vs.erase(v.begin()+j);
            }
        }
    }
    for(int i=0;i<v.size();i++){
           cout<<v[i];
    }
    // merge(a,a+n,b,b+m,v.begin());
    // vector<int>::iterator it;
    // for(it=v.begin();it!=v.end();it++){
    //       vs.insert(*it);
    // }


    // set<int> ::iterator i;
    //   for(i=vs.begin();i!=vs.end();i++){
    //       cout<<*i<<" ";
    //   }
}