#include <bits/stdc++.h>
using namespace std;

long long ceil_div(long long a, long long b){
    return (a+b-1)/b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k,x;
		cin>>n>>k>>x;
		vector<long long>a(n);
		long long sum = 0; 
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		if((sum*k)<x){
			cout<<0<<endl;
		}
		else{ 
			if(sum>x){
				long long sumi = 0;
				long long pos = -1;
				for(int i=n-1;i>=0;i--){
					sumi+=a[i];
					if(sumi>=x){
						pos = i;
						break;
					}
				}
				cout<<(n*k)-(n-pos-1)<<endl;
			}
			else{
                vector<long long> p(n+1);
                for(int i=0;i<n;i++){
                    p[i+1] = p[i] + a[i];
                }
                long long maxp = 0;
                for (int j=1;j<=n;j++){
                    maxp = max(maxp, p[j]);
                }
                vector<long long> maxisuff(n+1);
                maxisuff[n] = p[n];
                for (int i = n - 1; i >= 1; i--){
                    maxisuff[i] = max(p[i], maxisuff[i+1]);
                }
                vector<long long> maxisum(n);
                vector<long long> suff(n);
                for (int i = 0; i < n; i++) {
                    maxisum[i] = maxisuff[i+1] - p[i];
                    suff[i] = p[n] - p[i];
                }
                long long countl = 0;
                for (int i=0;i<n;i++) {
                    if (maxisum[i] >= x) {
                        countl += k;
                    } else {
                        if (k==1) {
                            continue;
                        }
                        long long RHS = x - suff[i] - maxp;
                        if (RHS<=0) {
                            countl += (k - 1);
                        } else {
                            long long targ = ceil_div(RHS, sum);
                            long long num = max(0LL, k - 1 - targ);
                            countl += num;
                        }
                    }
                }
                cout<<countl<<endl;
			}
		}
	}
}