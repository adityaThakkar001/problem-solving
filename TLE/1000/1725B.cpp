#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, d;
    cin>>n>>d;
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p.begin(), p.end());
    int wins = 0;
    int ind = -1;
    int end = n-1;
    int cur = p[end];
    while(ind<end){
        int maxi = p[end];
        if(cur<=d){
            cur+=maxi;
            ind++;
        }
        else{
            wins++;
            end--;
            if(end>=0) cur = p[end];
        }
    }
    cout<<wins<<endl;
}