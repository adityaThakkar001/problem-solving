#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>b(n);
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		if(n==1){
			cout<<1<<endl;
			cout<<b[0]<<endl;
		}
		else{
			vector<int>a;
			a.push_back(b[0]);
			for(int i=1;i<n;i++){
				if(b[i]>=b[i-1]){
					a.push_back(b[i]);
				}
				else{
					a.push_back(b[i]);
					a.push_back(b[i]);
				}
			}
			cout<<a.size()<<endl;
			for(int k=0;k<a.size();k++){
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
	}
}