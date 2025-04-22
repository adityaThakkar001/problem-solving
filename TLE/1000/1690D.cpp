#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        long long w = 0;
        long long mini = LLONG_MAX;
        for (long long i = 0; i < k; i++) {
            if (s[i] == 'W') {
                w++;
            }
        }
        
        mini = min(mini, w);
        for (long long i = 1; i <= n - k; i++) {
            if (s[i - 1] == 'W') {
                w--;
            }
            if (s[i + k - 1] == 'W') {
                w++;
            }
            mini = min(mini, w);
        }
        cout << mini << endl;
    }
    return 0;
}
