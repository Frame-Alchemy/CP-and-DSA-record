#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    int a[n], max=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] > max) max=a[i];
    }

    int b[n];
    for(int i=0; i<n; i++){
        b[i] = max+1-a[i];
        cout<<b[i]<<' ';
    }
    cout<<'\n';
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