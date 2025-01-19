#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int two = 0;
		vector<int>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==2)two++;
		}
		if(two==1 || two%2!=0){
			cout<<-1<<endl;
		}
		else if(two==0){
			cout<<1<<endl;
		}
		else{
			int k;
			int count = 0;
			for(int i=0;i<n;i++){
				if(count==two/2){
					k = i;
					break;
				}
				else if(a[i]==2){
					count++;
				}
			}
			cout<<k<<endl;
		}
	}
}