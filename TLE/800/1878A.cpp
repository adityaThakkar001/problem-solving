#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		vector<int>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		bool flag = false;
		for(int i=0;i<n;i++){
			if(a[i]==k){
				flag = true;
				break;
			}
		}
		if(flag){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}