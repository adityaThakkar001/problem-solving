#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long>a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		long long x = 0;
		for(int i=0;i<n;i++){
			x = a[i]^x;
		}
		if(x==0){
			cout<<0<<endl;
		}
		else if(n & 1){
			cout<<x<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}