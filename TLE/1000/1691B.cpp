#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        bool found = false;
        for (auto it : mp) {
            if (it.second == 1) {
                cout << -1 << endl;
                found = true;
                break;
            }
        }
        if (found) continue;
        int count = 0;
        for (auto it : mp) {
            if (it.second % 2 == 0) {
                for (int i = it.second; i > 0; i--) {
                    cout << i+count << " ";
                }
            } else {
                for (int i = it.second; i > it.second / 2 + 1; i--) {
                    cout << i+count << " ";
                }
                for (int i = 1; i<=it.second/2 + 1; i++) {
                    cout << i+count << " ";
                }
            }
            count+=it.second;
        }
        cout << endl;
    }
}
