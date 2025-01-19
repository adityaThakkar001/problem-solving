#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long x, n;
		cin>>x>>n;
		long long s = (4 * (n/4)) + 1;
		for(long long i=s;i<=n;i++){
			if(x%2!=0){
				x+=i;
			}
			else{
				x-=i;
			}
		}
		cout<<x<<endl;
	}
}