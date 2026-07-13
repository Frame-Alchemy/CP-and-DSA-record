#include <bits/stdc++.h>
using namespace std; 

void solve() {
   int n, k;
   cin >> n >> k;
   int a[n], n2 = 0, steps=INT_MAX;
   bool k_is_4_2ndCase=true;
   for(int i=0; i<n; i++) cin >> a[i];
   for(int i=0; i < n; i++){
        if(k != 4){
            if(a[i]%k == 0){
                steps = 0;
                break;
            }
            else{
                int tempsteps = k - a[i]%k;
                steps = min(steps, tempsteps);
            }
        }
        else{
            if(a[i]%4 == 0){
                steps=0;
                break;
            }
            else{
                if(a[i]%2 == 0){
                    n2++;
                }
                else{
                    int tempsteps = k - a[i]%k;
                    steps = min(steps, tempsteps);
                }
            }
        }
        if(k == 4){
            if(n2 >= 2) steps = 0;
            else if(n2 == 1) steps = 1;
            else if(n2 == 0) steps = min(steps , 2);
        }
    }
    cout << steps << '\n';
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