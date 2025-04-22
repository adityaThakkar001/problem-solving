#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n%2==0){
			cout<<-1<<endl;
		}
		else{
			for(int i=2;i<=n;i+=2){
				cout<<i<<" ";
			}
			for(int i=1;i<=n;i+=2){
				cout<<i<<" ";
			}
			cout<<endl;
		}
	}
}