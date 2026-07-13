#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n;  j++){
			cout<<'*';
		}cout<<'\n';
	}
}

void pattern3(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<i+1;  j++){
			cout<<j+1;
		}cout<<'\n';
	}
}

void pattern4(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<i+1;  j++){
			cout<<i+1;
		}cout<<'\n';
	}
}

void pattern5(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i;  j++){
			cout<<'*';
		}cout<<'\n';
	}
}

void pattern7(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<2*n-1;  j++){
			if(j < n-i-1 || j > i+4) cout<<" ";
			else cout<<'*';
		}cout<<'\n';
	}
}

void pattern8(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<2*n-1;  j++){
			if(j>i-1 && j<2*n-i-1) cout<<'*';
			else cout<<' ';
		}cout<<'\n';
	}
}

void pattern10(int N){
	for(int i=0;i<2*N-1;i++){
		int stars = i+1;
		// for the second half of the rotated triangle.
		if(i>=N) stars = 2*N-i-1;

		for(int j=0;j<stars;j++){
			cout<<"*";
		}
		cout<<endl;
    }
}

void pattern11(int n) {
	for(int i=0; i<n; i++){
		for(int j=0; j < i+1; j++){
			if(i%2 == 0 && j%2 == 0) cout<<'1';
			if(i%2 != 0 && j%2 != 0) cout<<'1';
			else if(i%2 != 0 || j%2 != 0) cout<<'0';
		}
		cout<<'\n';
	}
}

void pattern12(int n){
	for(int j=0; j<=2*n-1; j++){
		if(j >= n) j=2*n-j;
		int curnum = j+1;
		for(int i=0; i<n; i++){
			if(i >= j) cout<<curnum;
			else cout<<' ';
		}
		cout<<'\n';
	}
}


int main(){
	int n;
	cin>>n;
	// pattern1(n);
	// pattern3(n);
	// pattern4(n);
	// pattern5(n);
	// pattern7(n);
	// pattern8(n);
	// pattern10(n);	
	// pattern11(n);
	pattern12(n);	
}

