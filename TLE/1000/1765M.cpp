#include<bits/stdc++.h>
using namespace std;

long long sqrt(long long n){
	long long left = 1, right = n, ans = 1;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (mid <= n / mid) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long n1 = 1;
		for(long long i=2;i<=sqrt(n);i++){
			if(n%i==0){
				n1 = n/i;
				break;
			}
		}
		cout<<n1<<" "<<n-n1<<endl;
	}
}