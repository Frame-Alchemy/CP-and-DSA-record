// #include <bits/stdc++.h>
// using namespace std; 

// void solve() {
//     long long n;
//     cin >> n;
//     long long a[n], b[n];
//     for(int i=0; i<n; i++) cin >> a[i];
//     for(int i=0; i<n; i++) cin >> b[i];

// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int x;
    cin >> x;
    string s = to_string(x);
    int d = s.size();
    long long y = llround(pow(10, d)) + 1;
    cout<< y << '\n';
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