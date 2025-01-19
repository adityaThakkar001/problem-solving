#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--){
        int a,b,c;
    	cin>>a>>b>>c;
	    bool flag1 = false;
	    bool flag2 = false;
	    bool flag3 = false;
	    int new_a = 2*b - c;
	    if(new_a >= a && new_a % a == 0 && new_a >= 0) {
	        flag1 = true;
	    }

	    int new_b = (a+c)/2;
	    if(new_b >= b && (c-a)%2 == 0 && new_b % b == 0 && new_b >= 0) {
	        flag2 = true;
	    }

	    int new_c = 2*b - a;
	    if(new_c >= c && new_c % c == 0 && new_c >= 0) {
	        flag3 = true;
	    }

	    if(flag1||flag2||flag3){
	    	cout<<"YES"<<endl;
	    }
	    else{
	    	cout<<"NO"<<endl;
	    }
	}
    return 0;
}