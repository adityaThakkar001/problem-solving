#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		char c;
		cin>>n>>c;
		string s;
		cin>>s;
		vector<int>st;
		vector<int>en;
		for(int i=0;i<n;i++){
			if(s[i]==c){
				st.push_back(i);
			}
			else if(s[i]=='g'){
				en.push_back(i);
			}
		}
		vector<int>dist;
		if(n==1 || c=='g'){
			cout<<0<<endl;
		}
		else{
			for(int i=0;i<st.size();i++){
				int mini = INT_MAX;
				for(int j=0;j<en.size();j++){
					if(st[i]<en[j]){
						mini = min(mini, en[j]-st[i]);
					}
					else{
						mini = min(mini, (n-st[i])+en[j]);
					}
				}
				dist.push_back(mini);
			}
			int maxi = INT_MIN;
			for(int i=0;i<dist.size();i++){
				maxi = max(maxi, dist[i]);
			}
			cout<<maxi<<endl;
		}
	}
}