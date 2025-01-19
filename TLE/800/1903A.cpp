#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>a, int n){
	for(int i=1;i<n;i++){
		if(a[i-1]>a[i]){
			return false;
		}
	}
	return true;
}
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
		bool flag = true;
		if(!isSorted(a,n) && k==1){
			flag = false;
		}
		if(flag){
			cout<<"YES"<<endl;
		}
		if(!flag){
			cout<<"NO"<<endl;
		}

	}
}