#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int count = 1;
	bool flag = false;
	for(int i=1;i<s.length();i++){
		if(s[i]==s[i-1]){
			count++;
			if(count==7){
				flag = true;
				break;
			}
		}
		else{
			count = 1;
		}
	}
	if(flag){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}