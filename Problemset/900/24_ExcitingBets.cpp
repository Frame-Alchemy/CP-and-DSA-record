#include <bits/stdc++.h>
using namespace std; 

using ll = long long;

void solve() {
    ll a, b;
    cin>>a>>b;
    ll moves1=0, moves2=0;
    ll gcdd = abs(b-a);
    if(gcdd != 0){
        moves1=a%gcdd;
        moves2=gcdd - a%gcdd;
    }

    if(moves1 > moves2) cout<<gcdd<<' '<<moves2<<'\n';
    else cout<<gcdd<<' '<<moves1<<'\n';
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