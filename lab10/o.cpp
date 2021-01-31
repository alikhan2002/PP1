    #include <iostream>
    #include <algorithm>
    #include <vector>
    using namespace std;
    void f(int n) { 
	int binary[1000];  
	int i = 0; 
	while (n > 0) { 
		binary[i] = n % 2; 
		n = n / 2; 
		i++; 
	}  
	for (int j =i-1;j>=0;j--) {
		cout << binary[j]; 
    }cout<<endl;
} 
    int main(){
    int n;
    vector<int> v;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back(a[i]);
    }
    for_each( v.begin(), v.end(), f);



    }