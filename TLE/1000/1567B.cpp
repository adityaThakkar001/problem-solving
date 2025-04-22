#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long xorr = 0;
		if((a-1) % 4 == 0)xorr = a-1;
		else if((a-1) % 4 == 1)xorr = 1;
		else if((a-1) % 4 == 2)xorr = a;
		if(xorr==b){
			cout<<a<<endl;
		}
		else if(xorr!=b && (xorr^b)!=a){
			cout<<a+1<<endl;
		}
		else{
			cout<<a+2<<endl;
		}
	}
}