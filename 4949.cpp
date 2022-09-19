#include<bits/stdc++.h>
using namespace std;

string s;

int che(string st){
	stack<char> stks;
	for(char c:st){
		if(c==')'){
			if(!stks.empty() && stks.top()=='(') stks.pop();
			else stks.push(c);
		}else if(c=='(') stks.push(c);
		if(c==']'){
			if(!stks.empty() && stks.top()=='[') stks.pop();
			else stks.push(c);
		}else if(c=='[') stks.push(c);
	}	
	if(stks.empty()) return 1;
	else return 0;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	while(1){
		getline(cin, s);
		if(s[0]=='.') break;
		if(che(s)) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}
