#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		string s;
		cin>>s;
		unordered_map<char, int>mp;
		for(auto it: s){
			mp[it]++;
		}
		if(n-k==1){
			cout<<"YES"<<endl;
		}
		else{
			int odd = 0;
			for(auto it: mp){
				if(it.second%2!=0){
					odd++;
				}
			}
			if(k<odd-1)cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}
	}
}





/*
YES
NO
YES
YES
YES
YES
NO
NO
YES
YES
YES
YES
NO
YES
*/