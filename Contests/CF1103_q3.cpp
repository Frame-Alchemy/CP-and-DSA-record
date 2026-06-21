#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int a, b, x;
    cin>>a>>b>>x;
    int diff1=0, diff2=0, moves=0;
    while(a!=b){
        if(a>b) swap(a,b);
        diff1 = b-a;
        int dup = b;
        b /= x;
        diff2 = abs(b-a);
        if(diff2 < diff1) moves++;
        else{
            b= dup++;
            moves++;
        }
    }
    cout<<moves<<'\n';
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