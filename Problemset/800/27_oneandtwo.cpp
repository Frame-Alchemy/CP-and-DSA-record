#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, t2=0, s2=0, e2=0, k=0, psame=false;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];

        for(int i = 0; i < n; i++){
            if(a[i] == 2) t2++;
        }
        for(int i = 0; i < n-1; i++){
            if(a[i] == 2) s2++;
            e2 = t2 - s2;
            if( s2 == e2 ){
                psame = true;
                k = i+1;
                break;
            }
        }
        if(psame) cout<<k<<endl;
        else cout<<-1<<endl;
    }
}