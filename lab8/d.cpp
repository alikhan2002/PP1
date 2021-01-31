#include <iostream>
#include <vector>
using namespace std;
void f(int n,int a){
vector <int> v;
int x;
for(int i=0;i<n;i++){
        cin>>x;// вводим числа, после этого сет его упорядивает и выводит
        v.push_back(x);
    } 
cin>>a;
v.erase(v.begin()+a);

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
       
    }
}
int main(){
int n,a;
cin>>n;
f(n,a);
}