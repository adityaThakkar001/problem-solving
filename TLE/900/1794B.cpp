#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]==1){
				a[i]++;
			}
		}
		for(int i=1;i<n;i++){
			if(a[i]%a[i-1]==0){
				a[i]++;
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}