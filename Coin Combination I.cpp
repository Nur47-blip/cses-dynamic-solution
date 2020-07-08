#include <bits/stdc++.h>
#define ll long long
 
using namespace std;;
 
int main(){
 
	int n,x;
	int mod=1e9+7;
	cin>>n>>x;
	vector<int> arr(n);
	vector<int> dp(x+1,0);
	for (int i=0;i<n;i++) cin>>arr[i];
	
	dp[0]=1;
	for (int i=1;i<=x;i++){
		for (int j=0;j<n;j++){
			if (arr[j]<=i){
				(dp[i]+=dp[i-arr[j]])%=mod;
				
			}
		}
	}
	
	cout<<dp[x]<<endl;
 
	return 0;
}
