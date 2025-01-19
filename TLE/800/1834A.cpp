#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n);
		int m = 0, p = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0)p++;
			else m++;
		}
		int op = 0;
		if(p<m){
			while(p<m){
				m--;
				op++;
				p++;
			}
		}
		if(m%2!=0){
			while(m%2!=0){
				m--;
				op++;
			}
		}
		cout<<op<<endl;
	}
}