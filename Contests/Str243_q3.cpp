#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, k;
    cin>>n>>k;
    int summ=0, max1=0, cnt=0;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        summ += a[i]/2;
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            max1 = summ+a[i]/2+a[j]/2;
            if(max1 > k) cnt++;
        }
    }
    cout<<cnt<<'\n';
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