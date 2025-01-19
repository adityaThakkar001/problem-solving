#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		vector<vector<char>> tg(10, vector<char>(10));
		int count = 0;
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < 10; j++){
				cin >> tg[i][j];
				if(tg[i][j] == 'X' && (i >= 4 && i < 6) && (j >= 4 && j < 6)){
					count += 5;
				}
				else if(tg[i][j] == 'X' && (i >= 3 && i < 7) && (j >= 3 && j < 7)){
					count += 4;
				}
				else if(tg[i][j] == 'X' && (i >= 2 && i < 8) && (j >= 2 && j < 8)){
					count += 3;
				}
				else if(tg[i][j] == 'X' && (i >= 1 && i < 9) && (j >= 1 && j < 9)){
					count += 2;
				}
				else if(tg[i][j] == 'X' && (i >= 0 && i < 10) && (j >= 0 && j < 10)){
					count += 1;  
				}
			}
		}
		cout << count << endl;
	}
}
