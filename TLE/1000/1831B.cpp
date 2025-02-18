#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin>>t;
    while(t--){
    	long long n;
    	cin>>n;
    	vector<long long>a(n);
    	vector<long long>b(n);
    	set<long long>s;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
            s.insert(a[i]);
    	}
    	for(int i=0;i<n;i++){
    		cin>>b[i];
            s.insert(b[i]);
    	}
        unordered_map<long long, long long>mp1, mp2;
        long long l1 = 1;
        mp1[a[0]] = 1;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                l1++;
            }
            else{
                l1 = 1;
            }
            mp1[a[i]] = max(l1, mp1[a[i]]);
        }  
        long long l2 = 1;
        mp2[b[0]] = 1;
        for(int i=1;i<n;i++){
            if(b[i]==b[i-1]){
                l2++;
            }
            else{
                l2 = 1;
            }
            mp2[b[i]] = max(l2, mp2[b[i]]);
        }  
        long long res = 1;
        for(auto i:s){
            res = max(res, mp1[i]+mp2[i]);
        }	
        cout<<res<<endl;
    }
}