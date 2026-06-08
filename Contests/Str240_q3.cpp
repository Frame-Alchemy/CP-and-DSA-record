#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, cm =0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int x=*min_element(a, a+n);
        for(int i=0; i<n; i++){
            if(a[i] == x) cm++;
        }
        if(cm >= 2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}