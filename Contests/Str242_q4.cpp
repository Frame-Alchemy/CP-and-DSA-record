#include <bits/stdc++.h>
using namespace std; 

int gcd_copy(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int mvs = 0;
    int candidate = c;
    int gcdAB = gcd_copy(a, b);
    int gcdAC = gcd_copy(a, candidate);
    int gcdBC = gcd_copy(b, candidate);


    cout << mvs << '\n';
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


