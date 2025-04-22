#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,k;
		cin>>x>>y>>k;
		long long ops = 0;
		ops = ((k*y + k - 1)+(x-1)-1) / (x-1);
		ops+=k;
		cout<<ops<<endl;
	}
}