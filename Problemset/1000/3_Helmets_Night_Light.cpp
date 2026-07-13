#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, p;
    cin>>n>>p;
    long long int a[n], b[n], cost=p, cnt=1;
    vector <pair<int, int>> v;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++){
        cin>>b[i];
        v.emplace_back(b[i], a[i]);
    }
    sort(v.begin(), v.end());

    int i=0;
    while(cnt < n){
        if(v[i].second){
            cost += min(p,v[i].first);
            v[i].second--;
            cnt++;
        }
        else i++;

    }
    cout<<cost<<'\n';
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