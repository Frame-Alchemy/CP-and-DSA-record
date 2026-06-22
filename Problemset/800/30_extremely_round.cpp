#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, f, m, x;
        cin>>n;
        for(int i=0; i < 7; i++ ){
            f=n/(int)pow(10, i);
            x = i-1;
            if(f == 0) break;
            else m = f;
        }
        cout<<(m + 9*x)<<endl;
    }
}