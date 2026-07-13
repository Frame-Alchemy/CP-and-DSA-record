#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        bool possible = false;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i] == k){
                possible = true;
            }
        }
        cout << (possible ? "YES\n" : "NO\n");
    }
}