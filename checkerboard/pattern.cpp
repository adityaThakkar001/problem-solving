#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=2*n;i++){
		for(int j=1;j<=2*n;j++){
			if((i+j+1)%4==0 || (i==j) || ((abs(i-j))%4==0)){
				cout<<"#";
			}
			else{
				cout<<".";
			}
		}
		cout<<endl;
	}
}