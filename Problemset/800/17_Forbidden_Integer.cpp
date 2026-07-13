#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, k, x;
    cin>>n>>k>>x;
    vector<int> v;
    
    if(x == 1 && k > 1){
        if(n%2 == 0){
            cout<<"YES\n";
            cout<<n/2<<'\n';
            for(int i=1; i<= n/2; i++) cout<<2<<" ";
            cout<<'\n';
        }
        else if(n%2 != 0 && k >= 3){
            cout<<"YES\n";
            cout<<n/2<<'\n';
            for(int i=1; i <= n/2; i++){
                if(i != n/2) cout<<2<<" ";
                else cout<<3<<" ";
            }
            cout<<'\n';
        }
        else cout<<"NO\n";
    }

    else if(x == 2){
        cout<<"YES\n";
        cout<<n<<'\n';
        for(int i=1; i<= n; i++) cout<<1<<" ";
        cout<<'\n';

    }

    else if(x >= 3){
        if(n%2 == 0){
            cout<<"YES\n";
            cout<<n/2<<'\n';
            for(int i=1; i<= n/2; i++) cout<<2<<" ";
            cout<<'\n';
        }
        else{
            cout<<"YES\n";
            cout<<n/2+1<<'\n';
            for(int i=1; i <= n/2+1; i++){
                if(i != n/2) cout<<2<<" ";
                else cout<<1<<" ";
            }
            cout<<'\n';
        }
    }
    else cout<<"NO\n";

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