#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int m, n;
    cin>>m>>n;
    int a=0, c=0;
    if((n-m)%2 ==0) a=max(0, (n-m)/2);
    else a=max(0, (n-m)/2 +1);
    c= 2*a+m-n;
    cout<<c<<'\n';
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}