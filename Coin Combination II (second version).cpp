#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, x;
	
	cin >> n >> x;
	
	int mod = 1e9 + 7;
	vector<int> coin(n);
	
	for (int i=0;i<n;i++) cin>>coin[i]; //index coin mulai dari 0.
	
	vector<vector<int>> dp(n, vector<int> (x+1,0));
	
	for (int i=0; i<n; i++){
		for (int j=0; j<=x; j++) {
			if (j==0) dp[i][j] = 1; //base case 1 --> j habis, berarti tambah 1 cara
			else if (i==0 and j-coin[i]<0) dp[i][j] = 0; //base case 2 --> sudah dicoba sampai koin pertama, tapi j tidak habis. tidak ada cara. return 0.
			else {
				
				if (i>0)	
				dp[i][j]=dp[i-1][j]; // ini pas gak ngambil
				
				// tambahkan dengan pas ngambil
				if (j-coin[i]>=0) dp[i][j] = ( dp[i][j] + dp[i][j-coin[i]] ) % mod;
			}
			
		}
	}
	
	cout<<dp[n-1][x]<<endl;
	
}
