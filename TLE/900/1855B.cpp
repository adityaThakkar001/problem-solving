#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n%2==1){
			cout<<1<<endl;
		}
		else{
			int maxd = 0;
			for(int i=1;i<=n;i++){
				if(n%i!=0){
					break;
				}
				else{
					maxd++;
				}
			}
			cout<<maxd<<endl;
		}
	}
}

