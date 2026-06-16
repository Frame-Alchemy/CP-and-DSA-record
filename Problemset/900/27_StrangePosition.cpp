#include <bits/stdc++.h>
using namespace std; 

using ll = long long;

void solve() {
    int n, x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    ll partNotx=0, partx=0, sum=0;
    for(auto it : a){
        if(it%x == 0) partx +=it/x;
        else{
            partNotx +=it/x + 1;
            sum += it;
        }
    }
    if(sum%x != 0) sum=sum/x+1;
    else sum=sum/x;

    ll maxx=partx+partNotx;
    ll minn =partx+sum;
    
    cout<<minn<<' '<<maxx<<'\n';
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