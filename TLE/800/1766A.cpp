#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		int s = n.size();
		s-=1;
		int res = s*9;
		res += (n[0]-'0');
		cout<<res<<endl;
	}
}