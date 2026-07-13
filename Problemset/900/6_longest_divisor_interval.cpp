#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long n;
    cin >> n;

    long long ans = 0;
    // Simply check consecutive integers starting from 1
    for (long long i = 1; ; i++) {
        if (n % i == 0) {
            ans++;
        } else {
            break; // The consecutive interval breaks here
        }
    }

    cout << ans << '\n';
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}