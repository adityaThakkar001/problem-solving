#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int mini = INT_MAX;
	bool flag = false;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			flag = false;
			cout<<0<<endl;
			break;
		}
		else{
			flag = true;
			mini = min(mini, abs(a[i]-0));
		}
	}
	if(flag){
		cout<<mini<<endl;
	}
}