#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);

    bool divisible = false;
    int op = INT_MAX;
    int cnt2 = 0; 

    for (long long i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] % k == 0) divisible = true;
        
        int remainder = a[i] % k;
        if (remainder != 0) {
            op = min(op, (int)(k - remainder));
        }

        if (k == 4) {
            if (a[i] % 2 == 0) cnt2++;
        }
    }

    if (divisible) {
        cout << 0 << "\n";
        return;
    }

    if (k == 4) {
        cout << min(op, max(0, 2 - cnt2)) << "\n";
    } else {
        cout << op << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
