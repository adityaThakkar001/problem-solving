#include<bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        unordered_map<int, int>mp;
        bool flag = true;
        for(int i=0;i<n;i++){
        	mp[a[i]]++;
        	if(mp.size()>2){
        		flag = false;
        		break;
        	}
        }
        if(mp.size()==2){
        	int f1 = begin(mp)->second;
        	if(f1!=n/2 && f1!=(n+1)/2){
        		flag = false;
        	}
        }
        if(flag){
        	cout<<"YES"<<endl;
        }
        else{
        	cout<<"NO"<<endl;
        }
    }
    return 0;
}
