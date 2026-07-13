#include <bits/stdc++.h>
using namespace std; 
 
void solve() {
    int n;
    cin>>n;
    int a[n];
    bool possible=false;
    for(int i=0; i<n; i++) cin>>a[i];
 
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(__gcd(a[i], a[j]) <= 2){
                possible=true;
                break;
            }
        }
        if(possible) break;
    }
 
    cout << (possible ? "YES\n" : "NO\n" );
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