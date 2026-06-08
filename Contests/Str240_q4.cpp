#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, c1a=0, c1b=0, misc=0;
        cin>>n;
        string a, b;
        cin>>a>>b;
        for(int i=0; i<n; i++){
            if(a[i] == '1'){
                c1a++;
                if(b[i] != '1') misc++;
            }
            if(b[i] == '1') c1b++;
        }
    return 0;
}