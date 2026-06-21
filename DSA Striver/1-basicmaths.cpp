// 1. Count digits
// TC - O(log10(n))
// #include <bits/stdc++.h>
// using namespace std; 
// int count(int n){
//     int cnt = 0;
//     while( n > 0){
//         cnt++;
//         n = n/10;
//     }
//     return cnt;
// }
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     int digits = count(n);
//     cout << digits;
//     return 0;
// }
// OR
// TC - O(1)
// #include <bits/stdc++.h>
// using namespace std; 
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >>n;
//     int digits = (int)(log10(n)+1);
//     cout<<digits;
//     return 0;
// }


// 2. Reverse a number
// #include <bits/stdc++.h>
// using namespace std;
// void reverse(int n){
//     int revNum = 0;
//     while(n > 0){
//         int ld = n%10;
//         revNum = (revNum*10) + ld; 
//         n = n/10;
//     }
//     cout<<revNum;
// }
// int main(){
//     int n;
//     cin>>n;
//     reverse(n);
// }

// 3. Check Palindrome
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int dup = n;
//     int revnum = 0;
//     while(n > 0){
//         int ld = n%10;
//         revnum = (revnum*10) + ld;
//         n = n/10;  
//     }
//     if(dup == revnum) cout<<"YES";
//     else cout<<"NO";
// }

// 4. Armstrong number
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int dup = n;
//     int ld = 0, ArmNum = 0;
//     int cnt = (int)(log10(n)+1);
//     while(n > 0){
//         ld = n%10;
//         n = n/10;
//         ArmNum = ArmNum + (int)round(pow(ld, cnt));
//     }
//     if(ArmNum == dup) cout<<"Yes";
//     else cout<<"No";
// }

// 5. Print all the divisors
// TC O(sqrt(n)) + O(no. of factors * log(no. of factors)) + O(no.of factors)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i= 1; i <= sqrt(n); i++){
//         if(n%i == 0){
//             v.emplace_back(i);
//             if(n / i != i) v.emplace_back(n / i);
//         }
//     }
//     sort(v.begin(), v.end());
//     for(auto it : v){
//         cout <<it << " ";
//     }
// }

// 6. Print whether n is prime no.or not
// TC O(sqrt(n))
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int cnt = 0;
//     for(int i= 1; i <= sqrt(n); i++){
//         if(n%i == 0){
//             cnt++;
//             if(n / i != i) cnt++;
//         }
//     }
//     if(cnt == 2) cout << "Yes";
//     else cout << "No";
// }

// 7. GCD or HCF
// TC O(log (phi) (min(a,b )))
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int a, b;
//     cin >> a >> b;
//     while(a > 0 && b > 0){
//         if(a> b) a = a%b;
//         else b = b%a; 
//     }
//     if(a == 0) cout<<b;
//     else cout<<a;
// }
