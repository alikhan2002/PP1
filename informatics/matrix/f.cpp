    #include <iostream>
    using namespace std;
    int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int r[n];
    int cnt=0,ind,ind2;
    int mx=-111111, maxi=-555555;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>maxi)
            maxi=a[i][j];
            
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(maxi==a[i][j]){
            cnt++;     
            i++;}
        }
}
    cout<<cnt<<endl;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(maxi==a[i][j]){
            cnt++;
            ind=i;     
            i++;
            }
        } cout<<ind<<endl;
}
    return 0;
    }