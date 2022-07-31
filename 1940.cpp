#include <bits/stdc++.h>
using namespace std;

int n, m, sum, s[15001];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> s[i];
	}
	sort(s, s+n);
	if(m>200000){
		cout << 0 << "\n";
	} else {
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(s[i]+s[j] == m){
					sum++;
				}
			}
		}
		cout << sum << "\n";
	}
}
