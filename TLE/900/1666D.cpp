#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, n;
        cin >> s >> n;

        if (s == n) {
            cout << "YES" << endl;
            continue;
        }

        vector<int> mp(26, 0);
        for (char it : n) {
            mp[it - 'A']++;
        }

        string str = "";
        stack<char> st;

        for (char it : s) {
            st.push(it);
        }

        while (!st.empty()) {
            char ch = st.top(); 
            st.pop();           
            if (mp[ch - 'A'] > 0) {
                str += ch;      
                mp[ch - 'A']--; 
            }
        }

        reverse(str.begin(), str.end()); 
        if (str == n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
