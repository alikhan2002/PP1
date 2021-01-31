#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;
int main(){
queue<string> q;
int n,a;
cin>>n;
for(int i=0;i<n;i++){
    string s;
    cin>>a;
    if(a==1){
        cin>>s;
        q.push(s);
    }else{
        q.pop();
    }
       if(q.empty()){
            cout<<"queue is empty"<<endl;
        }else{ 
            cout<<q.front()<<endl;
            }
    }
}



