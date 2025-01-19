#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n = s.length();
		int p5 = -1;
		int p0 = -1;
		int b27 = -1;
		int b50 = -1;
		int op1 = INT_MAX;
		int op2 = INT_MAX;
		for(int i=n-1;i>=0;i--){
			if(s[i]=='5'){
				p5 = i;
				break;
			}
		}
		for(int i=n-1;i>=0;i--){
			if(s[i]=='0'){
				p0 = i;
				break;
			}
		}
		if(p5!=-1){
			for(int i=p5-1;i>=0;i--){
				if(s[i]=='2' || s[i]=='7'){
					b27 = i;
					break;
				}
			}
			op1 = (p5-b27-1) + (n-1-p5);
		}
		if(p0!=-1){
			for(int i=p0-1;i>=0;i--){
				if(s[i]=='5' || s[i]=='0'){
					b50 = i;
					break;
				}
			}
			op2 = (p0-b50-1) + (n-1-p0);
		}
		cout<<min(op1,op2)<<"\n";
	}
}