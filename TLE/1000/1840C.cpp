#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--) {
        long long n, k, q;
        cin >> n >> k >> q;      
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin>>a[i];
        }
        long long ans = 0;
        long long len = 0;
        for(int i=0;i<n;i++){
        	if(a[i]<=q){
        		len++;
        	}
        	else{
        		if(len>=k){
        			ans+=((len-k+1)*(len-k+2)/2);
        		}
        		len = 0;
        	}
        }
        if(len>=k){
        			ans+=((len-k+1)*(len-k+2)/2);
        }
        cout<<ans<<endl;
    }
}
