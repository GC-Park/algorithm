#include<bits/stdc++.h>
using namespace std;

int n, a[1000004], p[1000004];
stack<int> s;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	memset(p, -1, sizeof(p));
	for(int i=0; i<n; i++){
		cin >> a[i];
		while(s.size() && a[s.top()] < a[i]){
			p[s.top()] = a[i]; s.pop();
		}
		s.push(i);
	}
	for(int i=0; i<n; i++) cout << p[i] << " ";
	return 0;
}
