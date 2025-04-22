#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long>b(n);
		set<int>a;
		for(long long i=0;i<n;i++){
			cin>>b[i];
			a.insert(b[i]);
		}
		if(a.size()<n){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}
}