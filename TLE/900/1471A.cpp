#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		long long x;
		cin>>n>>x;
		vector<long long>a(n);
		bool flag = true;
		long long maxi = 0;
		for(long long i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%x!=0){
				flag = false;
			}
			maxi += ceil(a[i]/(float)x);
		}
		if(flag){
			cout<<maxi<<" "<<maxi<<endl;
		}
		else{
			long long sum = 0;	
			for(long long i=0;i<n;i++){
				sum+=a[i];
			}
			long long mini = ceil(sum/(float)x);
			cout<<mini<<" "<<maxi<<endl;
		}
	}
}