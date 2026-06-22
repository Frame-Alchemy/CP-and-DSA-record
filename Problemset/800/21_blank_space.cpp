#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i < n; i++) cin>>a[i];
        int count = 0, occ = 0;
        for(int i=0; i < n; i++){
            if(a[i] == 0){
                occ++;
            }
            else occ = 0;
            count = max(count, occ);
        }
        cout<<count<<"\n";
    }
}

