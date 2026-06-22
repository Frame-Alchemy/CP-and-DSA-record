#include <bits/stdc++.h>
using namespace std;

using ll = long long;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        if(n % 2 == 0) {
            cout << "YES\n";
        } else {
            if( (n - k) % 2 == 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}