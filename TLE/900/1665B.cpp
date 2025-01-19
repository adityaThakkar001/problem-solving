#include<bits/stdc++.h>
using namespace std;

#define endl "\n";

int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long>a(n);
		map<long long,long long>mp;
		for(long long i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		long long maxi = 0;
		for(auto it:mp){
			maxi = max(maxi, it.second);
		}
		long long op = 0;
		if(n==1 || n==maxi){
			cout<<op<<endl;
		}
		else{
			while(maxi<n){
				long long rem = min(n-maxi,maxi);
				op+=1+rem;
				maxi+=rem;
			}
			cout<<op<<endl;
		}
	}
}