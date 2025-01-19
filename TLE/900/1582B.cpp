#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long>a(n);
		long long one = 0;
		long long zer = 0;
		for(long long i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==1){
				one++;
			}
			if(a[i]==0){
				zer++;
			}
		}
		if(one==0){
			cout<<0<<endl;
		}
		else{
			if(zer==0){
				cout<<one<<endl;
			}
			else{
				long long ans = one*(pow(2,zer));
				cout<<ans<<endl;
			}
		}
	}
}