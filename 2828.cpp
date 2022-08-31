#include <bits/stdc++.h>
using namespace std;

int n, m, j, l, r, c, s=0;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	cin >> n >> m;
	cin >> j;
	l=1;
	for(int i=0; i<j; i++){
		r=l+m-1;
		cin >> c;
		if(c>=l && c<=r) continue;
		else{
			if(c<l){
				s+=(l-c);
				l=c;
			}else{
				l+=(c-r);
				s+=(c-r);
			}
		}
	}
	cout << s << "\n";
	return 0;
}
