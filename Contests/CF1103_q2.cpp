#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int a, b;
    int cnt=0, cnt1=0;
    for(int i=0; i<n-k; i++){
        if(s[i] == '1'){
            for(int j = i+1; j<n; j++){
                if(s[j] == '1'){
                    if(j-i == k){
                        s[i]='0';
                        s[j]='0';
                    }
                }
            }
        }
    }
    if(all_of(s.begin(), s.end(), [](char c){ return c == '0'; })) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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