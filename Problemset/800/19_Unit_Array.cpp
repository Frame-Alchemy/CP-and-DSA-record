#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int a[n], cnt_1=0, cnt_minus_1=0, ops=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] == 1) cnt_1++;
        else cnt_minus_1++;
    }
    while(cnt_minus_1 > cnt_1 || cnt_minus_1%2 != 0){
        cnt_minus_1--;
        cnt_1++;
        ops++;
    }
    cout<<ops<<'\n';
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