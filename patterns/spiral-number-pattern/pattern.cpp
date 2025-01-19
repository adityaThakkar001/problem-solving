#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0)); 
    int x = 1;
    int row_start = 0;
    int row_end = n - 1;
    int col_start = 0;
    int col_end = n - 1;

    while (x <= n * n) {
        // left to right
        for (int i = col_start; i <= col_end; i++) {
            arr[row_start][i] = x++;
        }
        row_start++;
        
        // top to bottom
        for (int i = row_start; i <= row_end; i++) {
            arr[i][col_end] = x++;
        }
        col_end--;
        
        // right to left
        if (row_start <= row_end) {
            for (int i = col_end; i >= col_start; i--) {
                arr[row_end][i] = x++;
            }
            row_end--;
        }
        
        // bottom to top
        if (col_start <= col_end) {
            for (int i = row_end; i >= row_start; i--) {
                arr[i][col_start] = x++;
            }
            col_start++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}
