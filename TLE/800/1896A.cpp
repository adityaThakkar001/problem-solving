#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		vector<int>sorted = a;
		sort(sorted.begin(), sorted.end());
		if(a==sorted){
			cout<<"YES"<<endl;
		}
		else{
			while(!(a==sorted)){
				bool flag = false;
				for(int i=1;i<n-1;i++){
					if(a[i]>a[i-1] && a[i]>a[i+1]){
						flag = true;
						swap(a[i], a[i+1]);
					}
				}
				if(!flag){
					cout<<"NO"<<endl;
					break;
				}
			}
			if(a==sorted){
				cout<<"YES"<<endl;
			}
		}
	}
}