#include <iostream>
#include <vector>
using namespace std;
void f(){
    vector<int> v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    f();
    return 0;
}