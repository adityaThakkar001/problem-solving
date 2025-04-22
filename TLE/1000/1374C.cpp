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
		int count = 0;
		int open = 0;
		int close = 0;
		for(int i=0;i<n-1;i++){
			if(s[i]=='('){
				open++;
			}
			else{
				close++;
			}
			count = max(count, close-open);
		}
		cout<<count<<endl;
	}
}