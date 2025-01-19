#include<bits/stdc++.h>
using namespace std;

bool okay(vector<int>a, int n){
	for(int i=0;i<n-1;i++){
		if(a[i]>=a[i+1]){
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
		int count = 0;
		bool flag = false;
		while(!okay(a,n)){
			for(int i=0;i<n-1;i++){
				while(a[i]>=a[i+1]){
					if(a[i]==0){
						flag = true;
						break;
					}
					a[i] = floor(a[i]/2);
					count++;
				}
				if(flag){
					break;
				}
			}
			if(flag){
				break;
			}
		}
		if(flag){
			cout<<-1<<endl;
		}
		else{
			cout<<count<<endl;
		}
	}
}