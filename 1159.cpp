#include<bits/stdc++.h>
using namespace std;

int c[30];
int main(){
	string s;
	int n, che=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> s;
		c[s[0]-'a'] += 1;
	}
	
	for(int i=0; i<26; i++){
		if(c[i]>=5){
			cout << (char)(i + 'a');
			che=1;
		}
	}
	if(che==0){
		cout << "PREDAJA";
	}
	return 0;
}
