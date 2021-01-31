#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n;
cin>>n;
vector <int> v;
int x;
for(int i=0;i<n;i++){
        cin>>x;// вводим числа, после этого сет его упорядивает и выводит
        v.push_back(x);
    }
int c,m;
cin>>c>>m;
reverse(v.begin()+c,v.begin()+m+1);
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
    }
}