#include<set>
#include<iostream>
using namespace std;
int main(){
int n; 
cin>>n;
int a[n];
set<int> s;
int i=0;
while(i<n){
    cin>>a[i];
    s.insert(a[i]);
    i++;

}
if(s.size()==n){
    cout<<"YES";
}else{
    cout<<"NO";
}
}