#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, moves = 0;
    cin>>n;
    bool possible = true;
    while(n != 1){
        if(n%6 == 0){
            moves++;
            n = n/6;
        }
        else if(n%3 ==0){
            moves++;
            n = 2*n;
        }
        else{
            possible = false;
            break;
        }
    }
    if(possible) cout<<moves<<'\n';
    else cout<<(-1)<<'\n';
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