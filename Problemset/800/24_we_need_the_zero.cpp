#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int a[n], total_xor=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        total_xor ^= a[i];
    }
    if(n%2 != 0){
        cout<<total_xor<<'\n';
    }
    else{
        if(total_xor == 0) cout<<total_xor<<'\n';
        else cout<<-1<<'\n';
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