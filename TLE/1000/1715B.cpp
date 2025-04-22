#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        long long min_s = k * b;
        long long max_s = k * b + n * (k - 1);
        if (s < min_s || s > max_s) {
            cout << -1 << endl;
        } else {
            long long remaining_remainder = s - k * b;
            vector<long long> r(n, 0);
            for (int i = 0; i < n; ++i) {
                long long add_rem = min(remaining_remainder, k - 1);
                r[i] = add_rem;
                remaining_remainder -= add_rem;
            }
            vector<long long> q(n, 0);
            q[0] = b;
            vector<long long> a(n);
            for (int i = 0; i < n; ++i) {
                a[i] = q[i] * k + r[i];
            }
            for (int i = 0; i < n; ++i) {
                cout << a[i] << (i == n - 1 ? "" : " ");
            }
            cout << endl;
        }
    }
    return 0;
}