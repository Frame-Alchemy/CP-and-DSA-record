// Simple 
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i = 0; i < n; i++) cin >> p[i];

        bool found = false;
        int i1, i2, i3;

        for(int j = 1; j < n-1; j++){
            if(p[j] > p[j-1] && p[j] > p[j+1]){
                i1 = j;     // j-1 in 1-based
                i2 = j+1;   // j in 1-based
                i3 = j+2;   // j+1 in 1-based
                found = true;
                break;
            }
        }

        if(found){
            cout << "YES\n";
            cout << i1 << " " << i2 << " " << i3 << "\n";
        } else {
            cout << "NO\n";
        }
    }
}
