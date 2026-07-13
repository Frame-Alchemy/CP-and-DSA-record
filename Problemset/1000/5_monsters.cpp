#include <bits/stdc++.h>
using namespace std;

// Comparator: max health first, then smaller index first
struct cmp {
    bool operator()(const pair<int,int> &a, const pair<int,int> &b) const {
        if (a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> health(n);
    for (int i = 0; i < n; i++) cin >> health[i];

    priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
    for (int i = 0; i < n; i++) pq.push({health[i], i});

    vector<int> deathOrder;

    while (!pq.empty()) {
        pair<int,int> p = pq.top(); // safe unpack
        pq.pop();

        int h = p.first;
        int idx = p.second;

        if (h <= 0) continue;

        h -= k;
        if (h > 0) {
            pq.push({h, idx});
        } else {
            deathOrder.push_back(idx);
        }
    }

    for (int idx : deathOrder) {
        cout << idx + 1 << " "; // adjust to 1-based indexing if needed
    }
    cout << "\n";
    return 0;
}




