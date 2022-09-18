#include<bits/stdc++.h>
using namespace std;

int n, c;
string s="666", sc;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	int i=1;
	while(1){
		sc = to_string(i);
		if(sc.find("666") != string::npos){
			c++;
		}
		if(c==n) break;
		i++;
	}
	cout << sc;
}
