#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string a, b;
		cin>>a>>b;
		int dist = 0;
		int maxd = 0;
		for(int i=0;i<b.length();i++){
			for(int j=0;j<a.length();j++){
				if(b[i]==a[j]){
					int k1 = i;
					int k2 = j;
					while(b[k1]==a[k2]){
						dist++;
						if(k1<b.length()-1 && k2<a.length()-1){
							k1++;
							k2++;
						}
						else{
							break;
						}
					}
					maxd = max(maxd, dist);
					dist = 0;
				}
			}
		}
		cout<<b.length() + a.length() - 2*maxd<<endl;
	}
}