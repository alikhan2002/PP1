#include <iostream>
#include <map>
#include <vector>
using namespace std;
vector< vector<char> >a(8, vector<char>(8));
void print(vector<vector <char> > a){
     for(int i=0;i<8;i++){
       for(int j=0;j<8;j++){
           cout<<a[i][j];
       }cout<<endl;
   }
}
void chess(char c, int n){
map<char,int> mp;
mp.insert (pair<char,int>(c,n) );
map<char,int>:: iterator it;


for(it=mp.begin();it!=mp.end();it++){
      if((*it).first=='A'){
          (a[0][(*it).second-1])='*';
      }
      if((*it).first=='B'){
           (a[1][(*it).second-1])='*';
      }
      if((*it).first=='C'){
           a[2][(*it).second-1]='*';
      }
      if((*it).first=='D'){
           a[3][(*it).second-1]='*';
      }
      if((*it).first=='E'){
           a[4][(*it).second-1]='*';
      }
      if((*it).first=='F'){
           a[5][(*it).second-1]='*';
      }
      if((*it).first=='G'){
           a[6][(*it).second-1]='*';
      }if((*it).first=='H'){
           a[7][(*it).second-1]='*';
      }
   } 
   
   
}


int main(){
int n,x;
cin>>n;
char c;
for(int i=0;i<8;i++){
       for(int j=0;j<8;j++){
          a[i][j]='0';
       }
   }
for(int i=0;i<n;i++){
cin>>c>>x;
chess(c,x);
}

print(a);



}