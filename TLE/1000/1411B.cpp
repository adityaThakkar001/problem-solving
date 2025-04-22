#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        while (true) {
            long long temp = n;
            bool ok = true;
            while (temp > 0) {
                long long dig = temp % 10;
                if (dig != 0) {
                    if (n % dig != 0) {
                        ok = false;
                        break;
                    }
                }
                temp /= 10;
            }
            if (ok) {
                cout << n << endl;
                break;
            }
            n++;
        }
    }
}