#include <iostream>
#include <vector>
using namespace std;
int main(){
int n,a,b;
cin>>n;
vector <int> v;
int x;
for(int i=0;i<n;i++){
        cin>>x;// вводим числа, после этого сет его упорядивает и выводит
        v.push_back(x);
    } 
cin>>a;
cin>>b;
v.erase(v.begin()+a,v.begin()+b+1);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
}
