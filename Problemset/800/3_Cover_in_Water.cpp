#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int dots = 0;
        bool hasTriple = false;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') dots++;
            if (i + 2 < n && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
                hasTriple = true;
            }
        }
 
        if (hasTriple) cout << 2 << endl;
        else cout << dots << endl;
    }
    return 0;
}