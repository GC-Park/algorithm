#include<bits/stdc++.h>
using namespace std;

int n, s[9], mx=-987654321;

int main(){
	for(int i=0; i<9; i++){
		cin >> s[i];
	}
	for(int i=0; i<9; i++){
		if(mx<s[i]) n=i+1;
		mx=max(mx, s[i]);
	}
	cout << mx << "\n" << n;	
}
