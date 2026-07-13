#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, k;
    cin>>n>>k;
    int x=1;
    int last=1;
    while(x+k <= n){
        last = x+k; 
        x +=k;
    }
    cout<<last<<'\n';
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}