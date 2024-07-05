#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for (int y = n - 1; y >= 0; y--) {  
        for (int i = 0; i <= y; i++) { 
            cout<<" "; 
        } 
        for (int x = 0; x + y < n; x++) { 
	        if(x & y) 
	            cout<<" "<<" "; 
	        else
	            cout<<"* "; 
	    } 
        cout<<endl; 
    } 
}