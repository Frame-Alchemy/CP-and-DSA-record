#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int a[n], ops=INT_MAX;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=1; i<n; i++){
        if(a[i] > a[i-1]){
            int diff = a[i]-a[i-1]; 
            int temp = diff/2 +1;
            ops = min(temp, ops);
        }
        else if(a[i] == a[i-1]){
            ops=1;
        }
        else{
            ops= 0;
            break;
        }
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