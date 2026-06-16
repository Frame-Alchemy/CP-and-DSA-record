#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long a, b, x;
    cin >> a >> b >> x;
    
    // Store all values 'a' can reach by repeatedly dividing by x
    // pair stores: {value, number of division steps taken}
    vector<pair<long long, int>> pathA;
    long long currA = a;
    int stepsA = 0;
    pathA.push_back({currA, stepsA});
    while (currA > 0) {
        currA /= x;
        stepsA++;
        pathA.push_back({currA, stepsA});
    }
    
    // Store all values 'b' can reach by repeatedly dividing by x
    vector<pair<long long, int>> pathB;
    long long currB = b;
    int stepsB = 0;
    pathB.push_back({currB, stepsB});
    while (currB > 0) {
        currB /= x;
        stepsB++;
        pathB.push_back({currB, stepsB});
    }
    
    long long min_ops = 2e18; // Initialize with a very large number
    
    // Compare every reachable value of a with every reachable value of b
    for (auto& pA : pathA) {
        long long valA = pA.first;
        int divA = pA.second;
        
        for (auto& pB : pathB) {
            long long valB = pB.first;
            int divB = pB.second;
            
            // Total operations = divisions of A + divisions of B + addition steps to close the gap
            long long current_ops = divA + divB + abs(valA - valB);
            min_ops = min(min_ops, current_ops);
        }
    }
    
    cout << min_ops << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}