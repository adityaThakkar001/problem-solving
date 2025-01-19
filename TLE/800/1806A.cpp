#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(d<b){
			cout<<-1<<endl;
		}
		else{
			int ts = 0;
			int s1 = abs(d-b);
			a+=s1;
			ts+=s1;
			if(c>a){
				cout<<-1<<endl;
			}
			else{
				int s2 = abs(c-a);
				ts+=s2;
				cout<<ts<<endl;
			}
		}
	}
}