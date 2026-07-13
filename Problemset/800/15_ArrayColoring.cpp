#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int a[n], odd=0, even=0;
    bool res = true;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2 == 0) even++;
        else odd++;
    }
    if(odd == 0 && even < 2) res=false;
    else if(even == 0 && odd < 2) res=false;
    else if(odd%2 != 0) res=false;

    if(res) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
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