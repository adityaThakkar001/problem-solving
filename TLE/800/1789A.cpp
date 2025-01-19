#include <bits/stdc++.h>
using namespace std;

/*
 GCD(n1,n2)<=min(n1,n2)
 */
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool flag = false;
        for(int i=0;i<n;i++){
        	for(int j=i;j<n;j++){
        		if(__gcd(a[i], a[j])<=2){
        			flag = true;
        			break;
        		}
        	}
        } 
        if(flag){
        	cout<<"YES"<<endl;
        }       
        else{
        	cout<<"NO"<<endl;
        }
    }
}
