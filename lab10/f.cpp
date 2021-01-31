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
   cin>>name1>>points1>>name2>>points2;
   int totalpoints=points1+points2;
   string names=name1+" and "+name2;
    if (m.empty()) {
      m[make_pair(names,totalpoints)]=i;
        }
   for(it=m.begin();it!=m.end();it++){
       if(names==(*it).first.first){
          if(totalpoints!=(*it).first.second){
                m[make_pair(names,totalpoints)] = i;
          }
             }
       else{
           m[make_pair(names,totalpoints)]=i;
           }

    }
} for (it=m.begin();it!=m.end();it++){
        cout<<(*it).first.first<<" "<<(*it).first.second<<endl;
    }
}