#include<bits/stdc++.h>
using namespace std;

//vector<pair<char, int>> c;
//
//int main(){
//	string al;
//	cin >> al;
//	for(int i=0; i<26; i++){
//		c.push_back({(char)('a'+i), 0});
//	}
//	
//	for(int i=0; i<al.size(); i++){
//		for(int j=0; j<26; j++){
//			if(c[j].first == al[i]){
//				c[j].second+=1;
//				break;
//			}
//		}
//	}
//	for (auto it : c) cout << it.second << " ";
//	return 0;
//}

int cnt[26];
int main(){
	string s;
	for(int i=0; i<s.size(); i++){
		cnt[s[i]-'a'] +=1;
	}
	for(int i=0; i<26; i++){
		cout << cnt[i] << " ";
	}
	return 0;
}
