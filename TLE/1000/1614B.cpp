#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        vector<pair<long long, pair<long long, long long>>> sa(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            sa[i].first = a[i];
            sa[i].second.second = i; 
        }
        sort(sa.begin(), sa.end(), [](const pair<long long, pair<long long, long long>>& p1, const pair<long long, pair<long long, long long>>& p2) {
            return p1.first > p2.first;
        });
        
        long long ans = 0;
        long long point = 1;
        for (long long i = 0; i < n; i++) {
            if (i % 2 == 1) {
                sa[i].second.first = 0 - point;
                ans += 2 * point * sa[i].first;
                point++;
            } else {
                sa[i].second.first = point;
                ans += 2 * point * sa[i].first;
            }
        }

        cout << ans << endl;
        cout << 0 << " ";
        sort(sa.begin(), sa.end(), [](const pair<long long, pair<long long, long long>>& p1, const pair<long long, pair<long long, long long>>& p2) {
            return p1.second.second < p2.second.second;
        });
        for(long long i=0;i<n;i++){
        	cout<<sa[i].second.first<<" ";
        }
        cout<<endl;
    }
}
