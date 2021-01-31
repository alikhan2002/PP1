#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=1;i<=100;i++){
        v.push_back(i);
        v.push_back(i);
    }
    for(int i=0;i<200;i++){
        cout<<v[i]<<" ";
    }
}