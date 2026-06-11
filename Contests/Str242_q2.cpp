#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, m;
    string a, b;
    cin>>n>>m>>a>>b;
    string initials = "";
    for(int i=0; i < n; i++){
        if(a[i] == b[i]){
            initials = initials + a[i];
        }
        else break;
    }
    cout<<initials<<'\n';
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