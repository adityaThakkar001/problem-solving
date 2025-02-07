#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long T;
    cin >> T;
    
    while(T--){
        long long n;
        cin>>n;
        int cnt2 = 0;
        int cnt3 = 0;
        while(n%2==0){
            n/=2;
            cnt2++;
        }
        while(n%3==0){
            n/=3;
            cnt3++;
        }
        if(cnt2>cnt3){
            cout<<-1<<endl;
        }
        else if(n!=1){
            cout<<-1<<endl;
        }
        else{
            cout<<cnt3 + (cnt3-cnt2)<<endl;
        }
    }
    
    return 0;
}
