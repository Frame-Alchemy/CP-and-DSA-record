#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, l, r;
    cin>>n>>l>>r;
    int a[n];
    int sum1=0, sum2=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i < l-1) sum1 += a[i];
        else if(i > r-1) sum2 += a[i];
    }
    cout<<max(sum1, sum2)<<'\n';
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