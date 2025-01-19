#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n <=2 || n % 2 != 0) {
            cout << -1 << endl;
            continue;
        }
        n /= 2;
        long long a = (n + 2) / 3;  
        long long b = n / 2;        

        cout << a << " " << b << endl;
    }
    return 0;
}
