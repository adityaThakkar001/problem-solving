#include<bits/stdc++.h>
using namespace std;

bool beautiful(vector<int>a, int n){
	int sum = 0;
	for(int i=0;i<n;i++){
		if(sum==a[i]){
			return false;
		}
		sum += a[i];
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		if(beautiful(a,n)){
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		else{
			reverse(a.begin(), a.end());
			if(a[0]==a[n-1]){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
				swap(a[1], a[n-1]);
				for(int i=0;i<n;i++){
					cout<<a[i]<<" ";
				}
				cout<<endl;
			}
		}
	}
}