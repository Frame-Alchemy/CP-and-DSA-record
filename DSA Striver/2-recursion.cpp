// Print name n times
// #include <bits/stdc++.h>
// using namespace std; 
// void f(int i, int n) {
//     if(i > n) return;
//     cout<<"Jash ";
//     f(i+1, n);
// }
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin>>n;
//     int i=1;
//     f(i, n);
//     return 0;
// }

// Print linearly from 1 to n
// #include <bits/stdc++.h>
// using namespace std; 
// void solve(int i, int n) {
//     if(i>n) return;
//     cout<<i;
//     i++;
//     solve(i, n);
// }
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, i=1;
//     cin >> n;
//     solve(i, n);
// }

// Print linearly from n to 1
#include <bits/stdc++.h>
using namespace std; 

void solve(int i, int n) {
    if(i<1) return;
    cout<<i;
    i--;
    solve(i, n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    solve(n, n);
}