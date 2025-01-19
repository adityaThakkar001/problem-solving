#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		string x, s;
		cin>>x>>s;
		bool flag = false;
		for(int count = 0;count<=5;count++){
			if(x.find(s)!=string::npos){
				cout<<count<<endl;
				flag = true;
				break;
			}
			x.append(x);
		}
		if(!flag){
			cout<<-1<<endl;
		}
	}
}
/*
3
1
2
-1
1
0
1
3
1
0
2
5
*/