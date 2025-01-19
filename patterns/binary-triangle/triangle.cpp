#include<iostream>
using namespace std;

int main(){
	int beg = 1;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		if(i%2==0){
				beg = 0;
			}
			else{
				beg = 1;
			}
		for(int j=0;j<=i;j++){
			cout<<beg;
			beg = 1-beg;
		}
		cout<<endl;
	}
	return 0;
}