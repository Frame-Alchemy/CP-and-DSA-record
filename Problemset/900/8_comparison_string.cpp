#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int max_streak = 1;
    int current_streak = 1;

    for (int i = 1; i < n; i++) {
        // If the current character matches the previous one, the streak continues
        if (s[i] == s[i - 1]) {
            current_streak++;
        } else {
            // Direction changed! Record the max streak and reset the counter
            max_streak = max(max_streak, current_streak);
            current_streak = 1;
        }
    }
    // Final check to capture the last streak of the string
    max_streak = max(max_streak, current_streak);

    cout << max_streak + 1 << '\n';
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