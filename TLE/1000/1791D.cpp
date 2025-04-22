#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> prefix(n+1, 0), suffix(n+1, 0);
        set<char> seenPrefix, seenSuffix;
        for (int i = 1; i <= n; i++) {
            seenPrefix.insert(s[i-1]);
            prefix[i] = seenPrefix.size();
        }
        for (int i = n-1; i >= 0; i--) {
            seenSuffix.insert(s[i]);
            suffix[i] = seenSuffix.size();
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, prefix[i+1] + suffix[i+1]);
        }
        
        cout << ans << endl;
    }
}
