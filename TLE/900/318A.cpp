#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, k;
	cin>>n>>k;
	if(k<=ceil(n/2.0)){
		cout<<2*k-1<<endl;
	}
	else{
		k-=ceil(n/2.0);
		cout<<2*k<<endl;
	}
}
