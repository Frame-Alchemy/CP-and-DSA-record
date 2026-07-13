#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long n;
    cin >> n;
    
    // Default fallback: if n is prime, the best pair is 1 and n-1
    long long best_a = 1; 
    
    // Find the smallest divisor of n (greater than 1)
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            // 'i' is the smallest divisor, so n/i is the largest proper divisor
            best_a = n / i; 
            break; // The first one we find yields the largest possible 'a'
        }
    }
    
    long long best_b = n - best_a;
    cout << best_a << " " << best_b << '\n';
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