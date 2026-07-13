// Easy one... 
#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    vector<int> b(n), a;
    for(int i=0; i<n; i++){
        cin >> b[i];
        if(i == 0) a.emplace_back(b[i]);

        else{
            if(b[i] >= b[i-1]) a.emplace_back(b[i]);
            else{
                a.emplace_back(b[i]);
                a.emplace_back(b[i]);
            }
        }
    }
    cout<<a.size()<<'\n';
    for(auto it : a){
        cout<< it << " ";
    }
    cout<<'\n';

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