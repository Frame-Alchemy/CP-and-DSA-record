#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int a[n];
    int minn = INT_MAX, maxx = INT_MIN;
    for(int i=0; i<n; i++){
        cin>>a[i];
        minn = min(minn, a[i]);
        maxx = max(maxx, a[i]);
    }
    int k = maxx+1-minn;
    cout<<k<<'\n';
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