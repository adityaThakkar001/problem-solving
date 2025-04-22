#include<bits/stdc++.h>
using namespace std;

int sum(vector<vector<int>>a){
	int sum = 0;
	for(int i=0;i<a.size();i++){
		for(int j=0;j<a[i].size();j++){
			sum+=abs(a[i][j]);
		}
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<vector<int>>a(n,vector<int>(m,0));
		int z = 0;
		int neg = 0;
		int mini = INT_MAX;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				if(abs(a[i][j])<mini && a[i][j]!=0){
					mini = min(mini, abs(a[i][j]));
				}
				if(a[i][j]==0){
					z++;
				}
				else if(a[i][j]<0){
					neg++;
				}
			}
		}
		if(neg%2==0 || (neg%2!=0 && z>0)){
			cout<<sum(a)<<endl;
		}	
		else if(neg%2!=0 && z==0){
			cout<<sum(a) - 2*mini<<endl;
		}
	}
}