#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int lmaxi = 0;
		int gmaxi = 0;
		int gs = 0;
		int ls = 0;
		for(char it:s){
			if(it=='<'){
				ls++;
				gs = 0;
				lmaxi = max(lmaxi, ls);
			}
			else{
				gs++;
				ls = 0;
				gmaxi = max(gmaxi, gs);
			}
		}
		cout<<max(lmaxi, gmaxi)+1<<endl;
	}
}