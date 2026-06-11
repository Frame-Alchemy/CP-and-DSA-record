//Simple
// Logic: game goes on until "" / "111...." / "000..." type is left. 
#include <bits/stdc++.h>
using namespace std; 

void solve(string s) {
    int cnt1 = 0, cnt0 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1')cnt1++;
        else cnt0++;
    }
    int min_moves = min(cnt1,cnt0);
    if(min_moves%2 == 0) cout<<"NET\n";
    else cout<<"DA\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}