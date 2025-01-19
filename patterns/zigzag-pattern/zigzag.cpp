#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<5;i++){
		for(int j=0;j<n;j++){
			if(((j+i)%8==4) || ((j-i)%8==4)){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}