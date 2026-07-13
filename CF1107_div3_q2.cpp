#include <bits/stdc++.h>
using namespace std; 

bool is_good(long long int n) {
    set <int> digits;
    while (n > 0) {
        digits.insert(n%10);
        n /= 10;
    }
    return digits.size() <= 2;
}

void solve() {
    int x;
    cin>>x;
    int y=2;
    vector<int> vec;
    while(y <= (int)1e9){
        if(is_good(y)) vec.emplace_back(y);
        y++;
    }
    for(int i=0; i<vec.size(); i++){
        if (is_good(x * vec[i])) {
            cout << vec[i] << "\n";
            break;
        }
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