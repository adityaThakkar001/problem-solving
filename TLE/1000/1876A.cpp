#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
	 
		vector<int>A(n);
		for(int i=0; i<n; i++)
			cin>>A[i];
		vector<int>B(n);
		for(int i=0; i<n; i++)
			cin>>B[i];
	 
		vector<pair<long long,long long>> cost_cap;
		cost_cap.push_back({p, n+1});
		for(int i=0; i<n; i++)
			cost_cap.push_back(make_pair(B[i], A[i]));
	 
		sort(cost_cap.begin(), cost_cap.end());
	 
		int total = 1;
		long long cost = p;
		int idx = 0;
		while(total < n){
			int left = n - total;
	 
			if(cost_cap[idx].second <= left){
				total += cost_cap[idx].second;
				cost = cost + cost_cap[idx].first *cost_cap[idx].second;
			}else{
				total = n;
				cost = cost + left*cost_cap[idx].first;
			}
			idx++;
		}
		cout<<cost<<"\n";
	}
}