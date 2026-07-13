#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a, a+n);

    int temp_cnt=1, cnt=1;
    for(int i=1; i<n; i++){
        if(a[i] - a[i-1] <= k){
            temp_cnt++;
            cnt = max(cnt, temp_cnt);
        }
        else temp_cnt=1;
    }
    cout<<n-cnt<<'\n';
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