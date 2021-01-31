#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int tot=1;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            if((s[i]-'0')<(s[j]-'0')){
                swap(s[i],s[j]);
            }
        }
    }
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]){
        tot++;         
        }
    }
    int a[tot];
    for(int i=0,j=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]){
            a[j]=s[i]-'0';
            j++;
        }
        if(s[i]!=s[i+1] && i==s.size()-2){
            a[j]=s[i+1]-'0';
        }if(s[i]==s[i+1] && i==s.size()-3){
            a[j]=s[i+1]-'0';
        }
    }
    int cnt=0,v[1000];
    // int current=0;
    // for(int i=0;i<s.size();i++){
    //     current++;
    //     if(a[i]==a[i+1]){
    //         cnt++;
    //     }else{
    //      v[i]=cnt;
    //      cnt=0;
    //     }
    //     if(i==s.size()-2 && a[i]!=a[i+1]){
    //         v[i+1]=1;
    //     }
    // }          
    int current=0,high=0,most;
    // for(int i=0,j=0;i<s.size()-1;i++){
    //     if(s[i]==s[i+1]){
    //             current++;
    //         }else if(s[i]!=s[i+1]){
    //             v[j]=current;
    //             j++;
    //             current=1;
    //         }if(s[i+1]!=s[i] && i==s.size()-2){
    //             current=1;
    //             v[j]=current;
    //         }
    // }
    for(int i=0,j=0;i<s.size();i++){
        current++;
        if(i==s.size()-1 || s[i]!=s[i+1]){
                if(current>0){
                high=current;
                v[j]=high;
                j++;
                }current=0;
            }
    }
                      
    for(int i=0;i<tot;i++){
        cout<<a[i]<<": "<<v[i]<<'\n';


    }



return 0;
}