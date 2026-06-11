#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<(2*n)-1; j++){
//             if(j>=i && j<=(2*n-2-i)) cout<<"*";
//             else cout<<" ";
//         }
//         cout<<'\n';
//     }
// }


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
        int hash[n+1] = {0};
	    for(int i = 0; i<n; i++){
	        cin>>a[i];
	        hash[a[i]]++;
	    }
	    int maxr = hash[1];
        int mfc = 1;
	    for(int i = 2; i < n+1; i++){
	        if(hash[i] > maxr){
                maxr = hash[i];
                mfc = i;
            }
	    }
	    cout<<mfc<<'\n';
	}
}


