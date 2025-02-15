#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n0 = 0;
        int n1 = 0;
        for (char ch : s) {
            if (ch == '1') {
                n1++;
            } else {
                n0++;
            }
        }

        if (n1 == n0) {
            cout << 0 << endl;
        } 
        else {
            string cs = "";
            for (char ch : s) {
                if (ch == '1') {
                    cs += '0';
                } else {
                    cs += '1';
                }
            }
            for (char ch : cs) {
                if (ch == '1') {
                    if (n1 == 0) {
                        break;
                    }
                    n1--;
                } else {
                    if (n0 == 0) {
                        break;
                    }
                    n0--;
                }
            }
            cout << n1 + n0 << endl;
        }
    }
}
