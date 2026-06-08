#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ca=0, cb=0;
        for(int i=0; i<n; i++){
            if(s[i] == 'a') ca++;
            if(s[i] == 'b') cb++;
        }
        cout<<ca<<" "<<cb<<'\n';
    }

    return 0;
}