#include<bits/stdc++.h>
using namespace std;

int n;
string s;
stack<char> stk;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> s;
		for(char c:s){
			if(c==')'){
				if(stk.empty()){
					stk.push(c);
					continue;
				}
				if(stk.top() == '(') stk.pop();
			}else{
				stk.push(c);
			}
		}
		if(!stk.empty()) cout << "NO" << "\n";
		else cout << "YES" << "\n";
		while(!stk.empty()) {
			stk.pop();
		}
	}
}
