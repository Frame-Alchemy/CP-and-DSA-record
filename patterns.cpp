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

void pattern10(int n){
	for(int i=0; i<2*n-1; i++){
		for(int j=0; j<n;  j++){
			
		}cout<<'\n';
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
	pattern10(n);	
}

