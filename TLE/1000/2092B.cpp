#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		string a,b;
		cin>>a>>b;
		long long count1e = 0;
		long long count1o = 0;
		long long count0e = 0;
		long long count0o = 0;
		for(long long i=0;i<n;i++){
			if(i%2==0){
				if(a[i]=='1'){
					count1e++;
				}
				if(b[i]=='0'){
					count0e++;
				}
			}
			else{
				if(a[i]=='1'){
					count1o++;
				}
				if(b[i]=='0'){
					count0o++;
				}
			}
		}
		if(count1e<=count0o && count1o<=count0e){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}