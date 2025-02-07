#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;
        int n1 = 0;
        int n2 = 0;
        for (auto a : s) {
            if (a=='1') {
                n1++;
            } else {
                n2++;
            }
        }
        if (n1==0 || n2==0) {
            cout<<"NET"<<endl;
        } else if (min(n1, n2) % 2 == 0) {
            cout<<"NET"<<endl;
        } else {
            cout<<"DA"<<endl;
        }
    }

    return 0;
}
