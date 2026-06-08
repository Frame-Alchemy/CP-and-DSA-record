#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, a, b;
    cin>>x>>y>>a>>b;
    if(x > a) cout<<"Alice";
    else if(x < a) cout<<"Bob";
    else if(x == a && y == b) cout<<"Alice";
    else if(x == a && y>b) cout<<"Alice";
    else if(x == a && y < b) cout<<"Bob";
    return 0;
}