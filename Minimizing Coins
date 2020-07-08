#include <bits/stdc++.h>
#define ll long long
 
using namespace std;;
 
int main(){
 
	ll n, x;
	cin>>n>>x;
	vector<ll> v(x+1,0);
	vector<ll> arr;
	
	int inp;
	for (int i=0;i<n;i++){
		cin>>inp;
		arr.push_back(inp);
	}
	
	for (int i=1;i<=x;i++){
		ll best=1e9;
		for (int k=0;k<n;k++){
			if (arr[k]<=i){
				best=min(best,v[i-arr[k]]+1);
			}
		}
		v[i]=best;
	}
	
	if (v[x]!=(ll)1e9) cout<<v[x]<<endl;
	else cout<<-1<<endl;
 
	
