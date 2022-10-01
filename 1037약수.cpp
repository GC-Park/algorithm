#include<bits/stdc++.h>
using namespace std;

int n, m[50];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> m[i];
	}
	sort(m, m+n);
	if(n==1) cout << m[0]*m[0];
	else cout << m[0] * m[n-1];
}
