#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,x;
		cin>>n>>x;
		vector<long long>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(n == 0){
			cout<<0<<endl;
			continue;
		}
		long long v1 = a[0] - x;
		long long v2 = a[0] + x;
		long long ans = 0;
		for(int i=1;i<n;i++){
			long long ul = a[i] + x;
			long long ll = a[i] - x;
			if((ul<v1) || (ll>v2)){
				v1 = ll;
				v2 = ul;
				ans++;
			} 
			else {
				v1 = max(v1, ll);
				v2 = min(v2, ul);
			}
		}
		cout<<ans<<endl;
	}
}