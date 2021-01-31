#include <bits/stdc++.h>
using namespace std;     
int main () {
  int a;
  cin >> a;
  int arr[a][a];
  for(int i = 0; i < a; i++)
    for(int j = 0; j < a; j++)
      cin >> arr[i][j];
  for(int c = a - 1; c >= -a + 1; c--){
    for(int i = 0; i < a; i++){
      if(i + c < a && i + c >= 0)
        cout << arr[i][i + c] << " ";}
    cout << endl;}
    }