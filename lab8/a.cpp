#include <iostream>
#include <vector>
using namespace std;
void f(int n){
vector <int> v;
int x;
for(int i=0;i<n;i++){
        cin>>x;// вводим числа, после этого сет его упорядивает и выводит
        v.push_back(x);
    }
for(int i=0;i<v.size();i++){
    for(int j=0;j<v.size();j++)
       if(v[j]>v[i]) swap(v[i],v[j]); 
    }
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}
int main(){
int n;
cin>>n;
f(n);
}