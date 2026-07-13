// Q1
// #include <bits/stdc++.h>
// using namespace std; 

// void solve() {
//     int k;
//     cin >> k;
//     long long c[k], cnt2=0, cnt_grt_2=0;
//     for(int i=0; i<k; i++) {
//         cin>>c[i];
//         if(c[i] == 2) cnt2++;
//         else if(c[i] >= 2) cnt_grt_2++;
//     }
//     if(cnt2 >= 2 || cnt_grt_2 >= 1) cout<<"YES\n";
//     else cout<<"NO\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--) {
//         solve();
//     }
//     return 0;
// }


// Q2
#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    int a[n];
    long long cnt1=0, cnt_not_1=0;
    long long cnt1_new=0, cnt2_new=0, cnt3_new=0;
    bool possible = false;

    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++){
        if(a[i] == 1) cnt1++;
        else cnt_not_1++;

        
    }
    if(possible) cout<<"YES\n";
    else cout<<"NO\n";

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

// Q3
// #include <bits/stdc++.h>
// using namespace std; 

// void solve() {
    
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--) {
//         solve();
//     }
//     return 0;
// }


// Q4
// #include <bits/stdc++.h>
// using namespace std; 

// void solve() {
    
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--) {
//         solve();
//     }
//     return 0;
// }