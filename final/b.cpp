#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[2*n][4*n-1];
    for(int i=0;i<2*n;i++){
        for(int j=0;j<4*n-1;j++){
            a[i][j]=" ";
        }
    }
    for(int i=0;i<2*n;i++){
        a[i][2*n-1-i]="*";
    }
     for(int i=0;i<2*n;i++){
        a[i][2*n-1+i]="*";
    }
    for(int i=n-1;i<n;i++){
        for(int j=n;j<3*n-2;j++){
            a[i][j]="*";
        }
    }
    for(int i=2*n-1;i<2*n;i++){
        for(int j=0;j<2*n-1;j++){
            a[i][j]="*";
        }
    }
    for(int i=2*n-1;i<2*n;i++){
        for(int j=2*n;j<4*n-1;j++){
            a[i][j]="*";
        }
    }
    for(int i=n+1;i<2*n-1;i++){
        a[i][i-1]="*";
    }
    int s=3*n-2;
     for(int i=n+1;i<2*n-1;i++){
        a[i][4*n-1-i]="*";
    }
    for(int i=0;i<2*n;i++){
        for(int j=0;j<4*n-1;j++){
            cout<<a[i][j];
        }cout<<'\n';
    }
}