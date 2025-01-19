#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n<2 || n%2!=0){
			cout<<-1<<endl;
			continue;
		}
		int a,b;
		n/=2;
		cout<<ceil(n/3.0)<<" "<<floor(n/2.0)<<endl;
	}
}