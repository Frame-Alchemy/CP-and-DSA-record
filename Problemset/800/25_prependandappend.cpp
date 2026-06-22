#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int left = 0, right = n-1;
        for(int i = 0; i < n/2; i++){
            if( (s[i] == '1' && s[n-i-1] == '0') || (s[i] == '0' && s[n-i-1] == '1') ){
                left++;
                right--;
            }
            else break;
        }
        cout<<right-left+1<<endl; 
    }
}