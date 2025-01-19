#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,k1,k2,q1,q2;
		cin>>a>>b;
		cin>>k1>>k2;
		cin>>q1>>q2;
		vector<pair<int, int>>k;
		vector<pair<int, int>>q;
		k.push_back({k1+a, k2+b});
		k.push_back({k1+a, k2-b});
		k.push_back({k1-a, k2+b});
		k.push_back({k1-a, k2-b});
		k.push_back({k1+b, k2+a});
		k.push_back({k1+b, k2-a});
		k.push_back({k1-b, k2+a});
		k.push_back({k1-b, k2-a});
		q.push_back({q1+a, q2+b});
		q.push_back({q1+a, q2-b});
		q.push_back({q1-a, q2+b});
		q.push_back({q1-a, q2-b});
		q.push_back({q1+b, q2+a});
		q.push_back({q1+b, q2-a});
		q.push_back({q1-b, q2+a});
		q.push_back({q1-b, q2-a});
		int count = 0;
		for(int i=0;i<k.size();i++){
			for(int j=0;j<q.size();j++){
				if(k[i].first==q[j].first && k[i].second==q[j].second){
					count++;
				}
			}
		}
		if(a==b){
			cout<<count/4<<endl;
		}
		else{
			cout<<count<<endl;
		}
	}
}