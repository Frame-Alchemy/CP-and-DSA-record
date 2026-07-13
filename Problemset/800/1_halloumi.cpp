// Easy one...
#include<bits/stdc++.h>
using namespace std;

using ll = long long; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i < n; i++) cin>>a[i];
        
        if(k != 1) cout<<"YES"<<'\n';
        else{
            if(k == 1){
            bool sorted = true;
            for(int i = 0; i < n-1; i++){
                if(a[i+1] < a[i]){
                    sorted = false;
                    break;
                }
            }
            cout << (sorted ? "YES\n" : "NO\n");
            }
            else cout<<"YES\n";
        }
    }
}
