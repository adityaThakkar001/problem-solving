#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<vector<long long>>a(n);
		long long mini = LLONG_MAX;
		long long mini0 = LLONG_MAX;
		for(long long i=0;i<n;i++){
			long long m;
			cin>>m;
			for(long long j=0;j<m;j++){
				long long e;
				cin>>e;
				a[i].push_back(e);
			}
			sort(a[i].begin(), a[i].end());
			mini = min(mini, a[i][1]);
			mini0 = min(mini0, a[i][0]);
		}
		long long total = 0;
		for(long long i=0;i<n;i++){
			total+=a[i][1];
		}
		total-=mini;
		total+=mini0;
		cout<<total<<endl;
	}
}