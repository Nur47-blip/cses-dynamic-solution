#include <bits/stdc++.h>
 
using namespace std;;
 
int n;
int arr[1000001];
int mod=1e9+7;
 
int dp(int q){
	if (arr[q]>0) return arr[q];
	else if (q==0) return 1;
	else {
		for (int i=1;i<=6 and q-i>=0;i++){
			(arr[q]+=dp(q-i))%=mod;
		}
		return arr[q];
	}
 
}
 
int main(){
 
	cin>>n;
	cout<<dp(n)<<endl;
 
	return 0;
}
