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
for(int i=n-1;i>=0;i--){
    cout<<v[i]<<" ";
    }
}
int main(){
int n;
cin>>n;
f(n);
}