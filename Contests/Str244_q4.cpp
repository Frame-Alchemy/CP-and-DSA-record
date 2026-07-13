#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n;
    cin>>n;
    int a[n];
    multiset<int> pq;
    for(int i=0; i<n; i++){
        cin>>a[i];
        pq.emplace(a[i]);
    }
    int operations = 0;

    while (*pq.begin() != *pq.rbegin()) {
        int top = *pq.rbegin();
        pq.erase(prev(pq.end()));

        // Divide by 2 and push back
        top /= 2;
        pq.insert(top);
        operations++;
    }

    cout << operations << "\n";
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