#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool lemonadeChange(int bills) {
    int one=10, two=10, five=10, ten =10, twenty=10, fifty=10, onehundread=10;
    bool ans = true;
    for(int i=0;i<bills.size();i++)
    {
        if(bills[i] == 5) five++;
        else if(bills[i] == 10)
        {
            if(five>0)
            {
                five--;
                ten++;
            }
            else return false;
        }
        else if(bills[i] ==20)
        {
            if(ten>0 and five>0)
            {
                ten--;
                five--;
                twenty++;
            }
            else if(five>3)
            {
                five-=3;
                twenty++;
            }
            else return false;
        }
    }
    return ans;
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
    for(int i=0;i<7;i++){
        int x;
        cin>>x;
    }
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	for(int i=0;i<n;i++){
        lemonadeChange(v[i]);
    }
}