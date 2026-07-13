#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int a, b, n;
    cin>>a>>b>>n;
    int x[n];
    long long sum=0;
    for(int i=0; i<n; i++) {
        cin>>x[i];
        if(x[i] >= a) sum += a-1;
        else sum += x[i];
    }

    cout<<sum+b<<'\n';

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