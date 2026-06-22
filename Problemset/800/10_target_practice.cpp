#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char a[10][10];
        int pt = 0;
        for(int i = 0; i  < 10; i++){
            for(int j = 0; j  < 10; j++) cin>>a[i][j];
        }
        for(int i = 0; i  < 10; i++){
            for(int j = 0; j  < 10; j++){
                if(a[i][j] == 'X'){
                    int di = (i > 4 ? 9 - i : i);
                    int dj = (j > 4 ? 9 - j : j);
                    pt += min(di+1,dj+1);
                }
            }
        }
        cout<<pt<<endl;
    }
}