#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    
    while(T--){
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++){
            cin >> p[i];
        }
        bool found = false;
        int idx1 = -1, idx2 = -1, idx3 = -1;
        for (int j = 1; j < n - 1; j++){
            if (p[j] > p[j-1] && p[j] > p[j+1]){
                idx1 = j - 1;
                idx2 = j;
                idx3 = j + 1;
                found = true;
                break;
            }
        }
        
        if (found){
            cout << "YES" << "\n";
            cout << idx1 + 1 << " " << idx2 + 1 << " " << idx3 + 1 << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}
