#include <iostream>
#include <vector>
#include <map>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
vector<string> v;
vector<int> w;
for(int i=0;i<n;i++){
    string s;   
    int m;
    cin>>s>>m;
    v.push_back(s);
    w.push_back(m);
}
sort(v.begin(),v.end());
sort(w.begin(),w.end());
for(int i=0;i<n;i++){
    cout<<v[i]<<" "<<w[i]<<endl;
}





    return 0;
}