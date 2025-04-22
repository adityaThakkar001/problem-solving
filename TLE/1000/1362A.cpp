#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long ca = 0;
		long long cb = 0;
		while(a%2==0){
			a/=2;
			ca++;
		}
		while(b%2==0){
			b/=2;
			cb++;
		}
		long long dif = abs(ca-cb);
		if(a!=b){
			cout<<-1<<endl;
		}
		else if(dif==0 && a==b){
			cout<<0<<endl;
		}
		else{
			long long ops = 0;
			ops+=(dif/3);
			dif-=(3*(dif/3));
			ops+=(dif/2);
			dif-=(2*(dif/2));
			ops+=dif;
			cout<<ops<<endl;
		}
	}
}
