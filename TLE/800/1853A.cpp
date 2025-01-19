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
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(!isSorted(a,n)){
			cout<<0<<endl;
		}
		else{
			int mini = INT_MAX;
			for(int i=1;i<n;i++){
				mini = min(mini, a[i]-a[i-1]);
			}
			cout<<mini/2 + 1<<endl;
		}
	}
}