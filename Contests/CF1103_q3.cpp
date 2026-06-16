#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int a, b, x;
    cin>>a>>b>>x;
    int dis1, dis2, steps=0, dupa=a, dupb=b;
    while(a != b){
        dis1=abs(a-b);
        dupa=a, dupb=b;
        if(a>b) dupa /=x;
        else dupb /=x;
        dis2=abs(dupa-dupb);
        if(dis1>dis2 && dis2>2){
            a=dupa,b=dupb;
            steps++;
        }
    }


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