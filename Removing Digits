#include <bits/stdc++.h>
 
using namespace std;;
 
int main(){
 
	int n;
	cin>>n;
	vector<int> dp(n+1,0);
	
	dp[0]=0;
	for (int i=1;i<=n;i++){
		int best=1e9;
		int temp=i;
		while (temp>0){
			if (temp%10!=0) best=min(best,dp[i-(temp%10)]+1);
			temp/=10;
		}
		dp[i]=best;
	}
	
	cout<<dp[n]<<endl;
 
	return 0;
}
