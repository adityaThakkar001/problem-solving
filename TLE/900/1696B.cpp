#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while(t--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        int count0 = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i]; 
            if(a[i]==0){
            	count0++;
            }
        }
        if(count0==n){
        	cout<<0<<endl;
        }
        else{
        	int l = -1;
        	int r = -1;
	        for(int i=0;i<n;i++){
	        	if(a[i]!=0){
	        		l = i;
	        		break;
	        	}
	        }
	        for(int i=n-1;i>=0;i--){
	        	if(a[i]!=0){
	        		r = i;
	        		break;
	        	}
	        }
	        int mini = INT_MAX;
	        for(int i=l;i<=r;i++){
	        	if(a[i]<mini){
	        		mini = a[i];
	        	}
	        }
	        if(mini!=0){
	        	cout<<1<<endl;
	        }
	        else{
	        	cout<<2<<endl;
	        }
        }
    }
}
