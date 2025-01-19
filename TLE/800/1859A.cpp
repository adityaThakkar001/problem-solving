#include<bits/stdc++.h>
using namespace std;

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
		map<int,int>mp;
		for(int it:a){
			mp[it]++;
		}
		if(mp.size()==1){
			cout<<-1<<endl;
		}
		else{
			int e = begin(mp)->first;
			int f = begin(mp)->second;
			cout<<f<<" "<<n-f<<endl;
			for(int i=0;i<f;i++){
				cout<<e<<" ";
			}
			cout<<endl;
			for(int i=0;i<n;i++){
				if(a[i]!=e){
					cout<<a[i]<<" ";
				}
			}
			cout<<endl;
		}

	}
}