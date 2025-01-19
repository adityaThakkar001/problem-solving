#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n);
		int maxi = 0;
		int z = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==0){
				z++;
				maxi = max(maxi, z);
			}
			else{
				z = 0;
			}
		}
		cout<<maxi<<endl;
	}
}