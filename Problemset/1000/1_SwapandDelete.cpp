#include <bits/stdc++.h>
using namespace std; 

void solve() {
    string s;
    cin >> s;
    int c1=0, c0=0, cost=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '0') c0++;
        else c1++;
    }
    for(int i=0; i<s.size(); i++){
        if(s[i] == '0' && c1>0) c1--;
        else if(s[i] == '1' && c0>0) c0--;
        else if(c0 == 0 || c1 == 0){
            cost=s.size()-i;
            break;
        }
    }
    cout<<cost<<'\n';
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