#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long w,h;
		cin>>w>>h;
		long long l1;
		cin>>l1;
		vector<long long>sl1(l1);
		for(long long i=0;i<l1;i++){
			cin>>sl1[i];
		}
		long long s1 = sl1[l1-1] - sl1[0];
		long long l2;
		cin>>l2;
		vector<long long>sl2(l2);
		for(long long i=0;i<l2;i++){
			cin>>sl2[i];
		}
		long long s2 = sl2[l2-1] - sl2[0];
		long long b1;
		cin>>b1;
		vector<long long>sb1(b1);
		for(long long i=0;i<b1;i++){
			cin>>sb1[i];
		}
		long long s3 = sb1[b1-1] - sb1[0];
		long long b2;
		cin>>b2;
		vector<long long>sb2(b2);
		for(long long i=0;i<b2;i++){
			cin>>sb2[i];
		}
		long long s4 = sb2[b2-1] - sb2[0];
		long long ans = max(max(s1*h, s2*h), max(s3*w, s4*w));
		cout<<ans<<endl;
	}
}