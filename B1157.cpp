#include<bits/stdc++.h>
using namespace std;

string s;
map<char, int> m;
char r;
int prev=-987654321;

bool cmp(const pair<int,int>& a, const pair<int,int>& b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main(){
	cin >> s;
	for(int i=0; i<s.length(); i++){
		if(islower(s[i])){
			m[(char)(s[i]-32)]++;
			continue;
		}
		m[s[i]]++;
	}
	vector<pair<char,int>> vec( m.begin(), m.end() );
	sort(vec.begin(), vec.end(), cmp);
	if(vec[0].second==vec[1].second){
		cout << "?";
		return 0;
	}
	cout << vec[0].first;
	return 0;
}
