#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(n==1){
        	cout<<0<<endl;
        	continue;
        }
        int maxi1 = INT_MIN;  
        int maxi2 = INT_MIN;  
        int maxi3 = INT_MIN;  
        for (int i = 1; i < n; i++) {
            maxi1 = max(maxi1, a[i] - a[0]);        
            maxi3 = max(maxi3, a[i-1] - a[i]);  
        }
        
        for (int i = 0; i < n - 1; i++) {
            maxi2 = max(maxi2, a[n - 1] - a[i]); 
        }
        cout << max(maxi1, max(maxi2, maxi3)) << endl;
    }
    return 0;
}
