#include<bits/stdc++.h>
using namespace std;

int n;
float s[1004], mx=-987654321, sum;

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> s[i];
		mx=max(mx, s[i]);
	}
	for(int i=0; i<n; i++){
		sum+=(s[i]/mx*100);
	}
	cout << sum/n;
	return 0;
}
