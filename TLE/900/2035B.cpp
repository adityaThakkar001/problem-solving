#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1 || n==3){
			cout<<-1<<endl;
		}
		else{
			n-=2;
			string s = "";
			if(n%2==0){
				for(int i=0;i<n;i++){
					s+="3";
				}
			}
			else{
				for(int i=0;i<n-2;i++){
					s+="3";
				}
				s+="63";
			}
			s+="66";
			cout<<s<<endl;
		}
	}
}