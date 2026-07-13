#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int a, b, x;
    cin >> a>> b>> x;

    vector<int> list_a;
    vector<int> list_b;

    list_a.emplace_back(a);
    list_b.emplace_back(b);

    int ops=INT_MAX, temp_ops=0;
    long long dup_a=a, dup_b=b;

    while(a >=1 || b >=1){
        a /=x, b /= x;
        if(a >= 1) list_a.emplace_back(a);
        if(b >= 1) list_b.emplace_back(b);
    }

    list_a.emplace_back(0);
    list_b.emplace_back(0);

    for(int i=0; i< list_a.size(); i++){
        for(int j=0; j< list_b.size(); j++){
            temp_ops = i + j + abs(list_a[i]-list_b[j]);
            ops = min(ops, temp_ops);
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