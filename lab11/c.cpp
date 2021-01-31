#include<iostream>
#include<map>
using namespace std;
int main(){
int n;
cin>>n;
map< pair<string,int> ,int> m;
map< pair<string,int> ,int>:: iterator it;
for(int i=0;i<n;i++){
   string name1,name2;
   int points1,points2;
   cin>>name1>>points1;
   cout<<endl;
    if (m.empty()) {
      m[make_pair(name1,points1)]=i;
        }
   for(it=m.begin();it!=m.end();it++){
       if(name1==(*it).first.first){
          if(points1!=(*it).first.second){
                m[make_pair(name1,points1)] = i;
          }
             }
       else{
           m[make_pair(name1,points1)]=i;
           }

    }
} for (it=m.begin();it!=m.end();it++){
        cout<<(*it).first.first<<" "<<(*it).first.second<<endl;
    }
}