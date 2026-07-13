#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, k;
    cin >> n>>k;
    string s;
    cin>>s;
    int hash[26]={0};
    int odd_occ=0;

    for(int i=0; i<s.size(); i++)
        hash[s[i]-'a']++;

    for(int i=0; i<26; i++){
        if(hash[i]%2 != 0) {
            odd_occ++;
        }
    }

    if((k-odd_occ+1)>=0){
        cout<<"YES\n";
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