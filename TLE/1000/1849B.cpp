#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] %= k;
            if (a[i] == 0) {
                a[i] = k;
            }
        }
        vector<int> ord(n);
        iota(ord.begin(), ord.end(), 0);
        stable_sort(ord.begin(), ord.end(), [&](int i, int j) {
            return a[i] > a[j];
        });
        for (int i = 0; i < n; i++) {
            cout << ord[i] + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}