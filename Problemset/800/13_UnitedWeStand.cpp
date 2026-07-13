#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    vector<int> a(n), b, c;
    for(int i=0; i<n; i++) cin>>a[i];

    int mx = *max_element(a.begin(), a.end());
    for(int i=0; i<n; i++){
        if(a[i] == mx){
            c.emplace_back(a[i]);
        }
        else b.emplace_back(a[i]);
    }

    if(b.empty()) cout<<-1<<'\n';

    else {
        cout<<b.size()<<" "<<c.size()<<'\n';
        for(auto it : b){
            cout<<it<<" ";
        }
        cout<<'\n';
        for(auto it : c){
            cout<<it<<" ";
        }
        cout<<'\n';
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