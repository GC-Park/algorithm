#include <bits/stdc++.h>
using namespace std;

string s, r;
int c[100], flag;
char m;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> s;
	for(char a:s) c[a]++;
	for(int i= 'Z'; i>='A'; i--){
		if(c[i]){
			if(c[i] & 1){
				m = char(i);
				flag++;
				c[i]--;
			}
			if(flag == 2)break;
			for(int j=0; j<c[i]; j+=2){
				r = char(i) + r;
				r += char(i);
			}
		}
	}
	if(m)r.insert(r.begin() + r.size()/2, m);
	if(flag==2)cout << "I'm Sorry Hansoo\n";
	else cout << r << "\n";
}
