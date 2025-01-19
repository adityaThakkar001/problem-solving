#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n * k);
        for (long long i = 0; i < n * k; i++) {
            cin >> a[i];
        }

        long long sum = 0;
        long long pos = (n + 1) / 2;
        long long start = n * k - pos; 

        if(n%2!=0){
        	for (long long i = start, count = 0; count < k; i -= (pos), count++) {
	            sum += a[i]; 
	        }
	        cout << sum << endl;
        }
        else{
        	for (long long i = start-1, count = 0; count < k; i -= (pos+1), count++) {
	            sum += a[i]; 
	        }
	        cout << sum << endl;
        }
    }
}
