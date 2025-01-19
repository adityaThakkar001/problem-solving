#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,m,i,j;
		cin>>n>>m>>i>>j;
		long long maxi = INT_MIN;
		long long a = (i-1) + (j-1);
		maxi = max(maxi, a);
		long long b = (i-1) + abs(j-m);
		maxi = max(maxi, b);
		long long c = abs(i-n) + (j-1);
		maxi = max(maxi, c);
		long long d = abs(i-n) + abs(j-m);
		maxi = max(maxi, d);
		if(maxi==a){
			if(i==n && j==m){
				cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
			}
			else{
				cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
			}
		}
		else if(maxi==b){
			if(i==n && j==1){
				cout<<1<<" "<<m<<" "<<1<<" "<<m<<endl;
			}
			else{
				cout<<1<<" "<<m<<" "<<n<<" "<<1<<endl;
			}
		}
		else if(maxi==c){
			if(i==1 && j==m){
				cout<<n<<" "<<1<<" "<<n<<" "<<1<<endl;
			}
			else{
				cout<<n<<" "<<1<<" "<<1<<" "<<m<<endl;
			}
		}
		else{
			if(i==1 && j==1){
				cout<<n<<" "<<m<<" "<<n<<" "<<m<<endl;
			}
			else{
				cout<<n<<" "<<m<<" "<<1<<" "<<1<<endl;
			}
		}
	}
}