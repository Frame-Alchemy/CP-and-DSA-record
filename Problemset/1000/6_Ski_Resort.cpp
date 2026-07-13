// TC O(n) 
// SC O(n)
// good question but somewhat slight morethan easy
#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    long long a[n];
    long long con_cnt = 0, ways = 0;
    vector<long long> temp_interval_dur;
    for(int i=0; i<n; i++){ // O(n) for the whole test
        cin>>a[i];
        if(a[i] <= q){
            con_cnt++;
        }
        if (a[i] > q || i == n-1){
            if(con_cnt != 0){
                temp_interval_dur.emplace_back(con_cnt);
                con_cnt = 0;
            } 
        }
    }

    for(auto it : temp_interval_dur){ // worst case-->O(n) for all test because it contains con_days set.  
        if(it >= k){
            while(it - k + 1){
                ways += (it-k+1);
                it--; 
            }
        }
    }

    cout<<ways<<'\n';
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
