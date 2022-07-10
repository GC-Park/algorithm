#include<bits/stdc++.h>
using namespace std;

int n, n2;
string s, a;

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		map<string, int> m;
		cin >> n2;
		for(int j=0; j<n2; j++){
			cin >> a >> s;
			m[s]++;
		}
		int r=1;
		for(auto t:m){
			r *= (t.second+1);
		}
		r = r-1;
		cout << r << "\n";
	}
	return 0;
}
