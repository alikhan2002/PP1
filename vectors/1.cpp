#include <iostream>
#include <vector>
using namespace std;
void f(){
    vector<int> v;
    for(int i=0;i<10;i++){
        v.push_back(i);/*
       векторды cout-қа шығару үшін */
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";/*
        .size-ды басқа контейнерлерге қолдануға болады*/
    }
}
int main(){
    f();
    return 0;
}