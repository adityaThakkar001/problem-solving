#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int i = 0;
		while(s[i]!=s[n-1]){
			i++;
			n--;
		}
		if((n-i)<0)cout<<0<<endl;
		else cout<<n-i<<endl;
	}
}




