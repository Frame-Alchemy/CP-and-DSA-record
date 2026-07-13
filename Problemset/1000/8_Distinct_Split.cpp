#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long cnta=0, cntb=0;
    int hashh[123] = {0};
    for(int i=0; i<s.size(); i++) hashh[s[i]]++;
    for(int i=97; i < 123; i++){
        if(hashh[i] >= 2) cntb++;
        if(hashh[i] > 0) cnta++;
    }
    cout<<cnta+cntb<<'\n';
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