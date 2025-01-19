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
		int dot = 0;
		int count = 0;
		bool flag = false;
		for(char it: s){
			if(it=='.'){
				dot++;
			}
			if(dot>=3){
				flag = true;
				break;
			}
			else if(it=='#'){
				count+=dot;
				dot = 0;
			}
		}
		count+=dot;
		if(flag){
			cout<<2<<endl;
		}
		else{
			cout<<count<<endl;
		}

	}
}
