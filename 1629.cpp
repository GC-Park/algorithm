#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
LL a, b, c;

LL multi(LL a, LL b){
	if(b==1) return a%c;
	LL _c = multi(a, b /2);
	_c = (_c * _c) % c;
	if(b&1)_c = (_c * a) % c;
	return _c;
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b >> c;
	cout << multi(a,b);
	return 0;
}
