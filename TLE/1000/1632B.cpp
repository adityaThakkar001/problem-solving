#include<bits/stdc++.h>
using namespace std;

int xorr(int n){
	for(int i=0;i<n;i++){

	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k = 0;
		while(1<<(k+1)<=n-1){
			k++;
		}
		for(int i=(1<<k)-1;i>=0;i--){
			cout<<i<<" ";
		}
		for(int i=(1<<k);i<n;i++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}