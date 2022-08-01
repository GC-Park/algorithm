#include <bits/stdc++.h>
using namespace std;

int n, c;
string s;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> s;
		stack<char> st;
		for(char a : s){
			if(st.size() && st.top()==a){
				st.pop();
			}
			else{
				st.push(a);
			}
		}
		if(st.size()==0){
			c++;
		}
	}
	cout << c;
}
