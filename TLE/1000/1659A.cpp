#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, r, b;
		cin>>n>>r>>b;
		string s = "";
		int div = b+1;
		int ind = 0;
		while(r>0){
			int ans = r/div;
			for(int i=0;i<ans;i++){
				s+="R";
			}
			if(b>0){
				s+="B";
			}
			b--;
			r-=ans;
			div--;
		}
		cout<<s<<endl;
	}
}