#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==0){
        n++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0 && j>=n/2) || (i<=n/2 && j==0) || (i==n/2) || (j==n/2) || (i==n-1 && j<=n/2) || (j==n-1 && i>=n/2) || (i==n/4 && j==n/4) || (i==n/4 && j==(3*n)/4) || (i==(3*n)/4 && j==n/4) || (i==(3*n)/4 && j==(3*n)/4)) {
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}
