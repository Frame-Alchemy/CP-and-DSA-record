// Simple
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n * k);
        for (int i = 0; i < n * k; i++) 
            cin >> v[i];

        long long pointer = n * k;

        long long sum = 0;
        while (k--)
        {
            pointer -= (n / 2 + 1);
            sum += v[pointer];
        }
        cout << sum << endl;
    }
    return 0;
    
}
