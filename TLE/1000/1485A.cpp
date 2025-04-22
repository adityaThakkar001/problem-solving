#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		int min_ops = 1e9 + 7;
	    for (int b_inc = 0; b_inc <= 40; ++b_inc) {
	        long long current_b = b + b_inc;
	        if (current_b <= 1) continue;
	        long long current_a = a;
	        int divisions = 0;
	        while (current_a > 0) {
	            current_a /= current_b;
	            divisions++;
	        }
	        min_ops = min(min_ops, b_inc + divisions);
	    }
	    cout<<min_ops<<endl;
	}
}